#include "BitcoinExchange.hpp"

void getData(std::map<std::string, double> &data)
{
    std::ifstream file("data.csv");
    if (!file.is_open())
        throw std::ios_base::failure("failed to open database file");
    std::string line;
    std::getline(file, line);
    while (std::getline(file, line))
    {
        std::stringstream sstream;
        std::string date, value;
        sstream << line;
        std::getline(sstream, date, ',');
        sstream >> value;
        data[date] = std::strtod(value.c_str(), NULL);
    }
}

bool checkDate(std::string &date)
{
    int d, m, y;
    std::tm tm;
    if (!strptime(date.c_str(), "%Y-%m-%d", &tm))
        throw std::runtime_error("bad input => " + date);
    std::stringstream ss(date);
    char lim;
    if (ss >> y >> lim >> m >> lim >> d)
    {
        std::memset(&tm, 0, sizeof(tm));
        tm.tm_mday = d;
        tm.tm_mon = m - 1;
        tm.tm_year = y - 1900;
        tm.tm_isdst = -1;
        std::time_t time = mktime(&tm);
        std::time_t now = std::time(NULL);
        std::tm *valid = localtime(&time);
        if (valid->tm_mday == d && valid->tm_mon == m - 1 && valid->tm_year == y - 1900 && time <= now)
            return true;
    }
    throw std::runtime_error("wrong date " + date);
}


double checkValue(std::string &value)
{
    char *end;
    double val = std::strtod(value.c_str(), &end);
    if (end == value.c_str() || *end != '\0')
        throw std::runtime_error("bad input => " + value);
    unsigned int dotPos = value.find('.');
    if (!dotPos || dotPos == value.length() - 1)    
        throw std::runtime_error("bad input => " + value);
    if (val < 0)
        throw std::runtime_error("not a positive number => " + value);
    if (val > 1000)
        throw std::runtime_error("too large number => " + value);
    return val;
}

void btc(std::ifstream &file)
{
    std::stringstream ss;
    std::string line, date, lim, value;
    std::map<std::string, double> data;
    getData(data);
    int i = 0;
    while (std::getline(file, line))
    {
        try
        {
            ss.clear();
            ss << line;
            ss >> date >> lim >> value;
            if (!i && (date != "date" || lim != "|" || value != "value" || line.length() != date.length() + value.length() + 3))
                throw std::runtime_error("bad header => " + line);
            if (i && (line.length() != (13 + value.length()) || !checkDate(date) || lim != "|"))
                throw std::runtime_error("bad input => " + line);
            if (i)
            {
                double val = checkValue(value);
                std::map<std::string, double>::iterator it;
                it = data.find(date);
                if (it == data.end())
                {
                    it = data.lower_bound(date);
                    if (it == data.begin())
                        throw std::runtime_error("no data for this date => " + date);
                    it--;
                }
                std::cout << it->first << " => " << std::setprecision(0) << val << " = "
                          << std::setprecision(2) << val * it->second << std::endl;
            }
        }
        catch (std::exception &e)
        {
            std::cerr << "Error: " << e.what() << std::endl;
        }
        i++;
    }
    (!i) ? throw std::runtime_error("Error: empty file") : 0;
}

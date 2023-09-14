#include "BitcoinExchange.hpp"

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
        std::tm *valid = localtime(&time);
        if (valid->tm_mday == d && valid->tm_mon == m - 1 && valid->tm_year == y - 1900)
            return true;
    }
    throw std::runtime_error("wrong date " + date);
}

double checkValue(std::string &value)
{
    char *end;
    double val = std::strtod(value.c_str(), &end);
    if (end == value.c_str() || *end != '\0')
        throw std::runtime_error(value);
    if (val < 0)
        throw std::runtime_error("not a positive number.");
    if (val > 1000)
        throw std::runtime_error("too large number.");
    return val;
}

void btc(std::ifstream &file)
{
    std::stringstream ss;
    std::string line;
    std::string date;
    std::string lim;
    std::string value;
    int i = 0;
    std::map<std::string, double> btc;
    std::map<std::string, double>::iterator it;
    while (getline(file, line))
    {
        try
        {
            ss.clear();
            ss << line;
            ss >> date >> lim >> value;
            if (!i && (date != "date" || lim != "|" || value != "value" || line.length() != date.length() + value.length() + 3))
                throw std::runtime_error("bad input => " + line);
            if (i && (line.length() != (13 + value.length()) || !checkDate(date) || lim != "|" || !checkValue(value)))
                throw std::runtime_error("bad input => " + line);
            // if (i)
            //     btc.insert(std::make_pair(date, checkValue(value)));
        }
        catch (std::exception &e)
        {
            std::cerr << "Error: " << e.what() << std::endl;
        }
        i++;
    }
    (!i) ? throw std::runtime_error("Error: empty file") : 0;
}

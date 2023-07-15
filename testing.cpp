#include <iostream>
int main() {
    // Get current time
    std::time_t currentTime = std::time(nullptr);

    // Convert to local time
    std::tm* localTime = std::localtime(&currentTime);

    // Extract hours, minutes, and seconds
    int year = localTime->tm_year;
    int month = localTime->tm_mon;
    int day = localTime->tm_mday;
    int hour = localTime->tm_hour;
    int minute = localTime->tm_min;
    int second  = localTime->tm_sec;

    // Display the current time
    std::cout << "[" << year << month << day << "_" << hour << minute  << second << "]"<< std::endl;

    return 0;
}
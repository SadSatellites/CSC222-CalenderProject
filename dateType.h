#ifndef PROJECT_6_DATETYPE_PROJECT_DATETYPE_H
#define PROJECT_6_DATETYPE_PROJECT_DATETYPE_H

#include <iostream>
#include <string>
using namespace std;

class dateType {
    public:
    dateType();
    void setMonth(int x);       // Manually set the month
    void setDay(int y);     // Manually set the day
    void setYear(int z);        // Manually set the year
    void setDates(int x, int y, int z);     // Manually set the date (Month, Day, Year)
    int getMonth();     // Returns the current month (As an integer (month of the year 1 - 12))
    int getDay();       // Returns the current day
    int getYear();      // Returns the current year
    string isLeapYear(int x);       // Returns "True" or "False" is given year is a leap year
    int getDaysInMonth(int x, int y);       // Returns the number of days in a given year's month as an integer
    string printDate();     // Prints the date the class is currently set to
    int daysSinceBoY();     // Days from the start of the year to the set date
    int daysUntilEoY();     // Days from the set date to the end of the year
    string addDays(int x);      // Add "x" days to the set date

    private:
    int varMonth;
    int varDay;
    int varYear;
};


#endif //PROJECT_6_DATETYPE_PROJECT_DATETYPE_H

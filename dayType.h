#ifndef PROJECT_5_DAYTYPE_CLASS_PROJECT_DAYTYPE_H
#define PROJECT_5_DAYTYPE_CLASS_PROJECT_DAYTYPE_H

#include <string>
#include <iostream>
using namespace std;

class dayType {
    public:
    dayType(int x);

    void setDay(string x);      // Sets the day
    void printDay();        // Prints the day to screen
    string getDay();        // Returns day as string
    string previousDay();       // Returns previous day as string
    string nextDay();       // Returns next days as string
    void addDay(int);       // Adds a number of days to our current set day
    dayType(string x);      // Constructor with parameter
    dayType();      // Default constructor - set Sunday to day

    private:
    string day;
    int varIndex;
    static string myDays[7];

};


#endif //PROJECT_5_DAYTYPE_CLASS_PROJECT_DAYTYPE_H

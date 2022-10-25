#ifndef PROJECT_5_DAYTYPE_CLASS_PROJECT_DAYTYPE_H
#define PROJECT_5_DAYTYPE_CLASS_PROJECT_DAYTYPE_H

#include <string>
#include <iostream>
using namespace std;

class dayType {
    public:
    dayType(int x);

    void setDay(string x);
    void printDay();
    string getDay();
    string previousDay();
    string nextDay();
    void addDay(int);
    dayType(string x);
    dayType();

    private:
    string day;
    int varIndex;
    static string myDays[7];

};


#endif //PROJECT_5_DAYTYPE_CLASS_PROJECT_DAYTYPE_H

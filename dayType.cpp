#include "dayType.h"
#include <string>
#include <iostream>
using namespace std;

string dayType::myDays[7]= {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

void dayType::setDay(std::string x) {
    int varFlag = 0;

    for (int i = 0; i < 7; ++i) {
        if (x == myDays[i]) {
            varIndex = i;
            varFlag = 1;
            day = myDays[i];
            break;
        }
    }
    if (varFlag == 0) {
        cout << "Error in input!" << endl;
        abort();
    }
}

void dayType::printDay() {
    cout << "\nThe day is: " << day << endl;
}

string dayType::getDay() {
    return day;
}

string dayType::previousDay() {
    string varPrevDay;
    varPrevDay = myDays[varIndex - 1];
    if (varIndex == 0) {
        varPrevDay = myDays[6];
    }
    return varPrevDay;
}

string dayType::nextDay() {
    string varNextDay;
    varNextDay = myDays[varIndex + 1];
    if (varIndex == 6) {
        varNextDay = myDays[0];
    }
    return varNextDay;
}

void dayType::addDay(int x) {
    string varNewDay;
    int varCopy;

    varCopy = x;
//    cout << "varIndex: " << varIndex << endl;     // For troubleshooting
//    cout << "VarIndex + X: " << (varIndex + x) << endl;       // For troubleshooting
    if (x < 0) {
        cout << "Error in input! Only positive numbers." << endl;
        abort();
    }
    while ((varIndex + x) >= 7) {
        x = x - 7;
//        cout << "x value in while loop: " << x << endl;       // For troubleshooting
    }
//    cout << "VarIndex + X after while loop: " << (varIndex + x) << endl;      // For troubleshooting
    varNewDay = myDays[varIndex + x];
    day = myDays[varIndex + x];
    cout << "The new day +"<< varCopy << " days is: " << varNewDay << endl;
}

dayType::dayType() {
    day = myDays[0];
    cout << "Default day: " << day << endl;
}

dayType::dayType(string x) {
    setDay(x);
}
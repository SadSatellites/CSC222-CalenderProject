#include "dateType.h"
#include <iostream>
#include <string>
using namespace std;

void dateType::setMonth(int varInput) {
    if (varInput >= 1 && varInput <= 12) {
        varMonth = varInput;
    }
    else {
        cout << "Incorrect input!" << endl;
    }
}

void dateType::setDay(int y) {
    if (y >= 1 && y <= 31) {
        varDay = y;
    }
    else {
        cout << "Incorrect input!" << endl;
    }
}

void dateType::setYear(int z) {
    if (z >= 1900) {
        varYear = z;
    }
    else {
        cout << "Incorrect input!" << endl;
    }
}

void dateType::setDates(int q, int w, int e) {
    if (q >= 1 && q <= 12) {
        varMonth = q;
    }
    if (w >= 1 && w <= 31) {
        varDay = w;
    }
    if (e >= 1900) {
        varYear = e;
    }

}

int dateType::getMonth() {
    return varMonth;
}

int dateType::getDay() {
    return varDay;
}

int dateType::getYear() {
    return varYear;
}

string dateType::isLeapYear(int x) {
    if ((x % 4) == 0) {
        return "True";
    }
    else {
        return "False";
    }
}

int dateType::getDaysInMonth(int x, int y) {
    if (x == 2) {
        if ((y % 4) == 0) {
            return 29;
        }
        else {
            return 28;
        }
    }
    else {
        if ((x % 2) == 0) {
            return 30;
        }
        else {
            return 31;
        }
    }
}

string dateType::printDate() {
    cout << varMonth << "-" << varDay << "-" << varYear << endl;
    return "";
}

int dateType::daysSinceBoY() {
    int varTemp = 0;
    for (int i = 0; i < varMonth; ++i) {
        varTemp =+ getDaysInMonth(i, varYear);
    }
    varTemp += (varDay - 1);

    return varTemp;
}

int dateType::daysUntilEoY() {
    int varTemp = 0;
    for (int i = 0; i < (12 - varMonth); ++i) {
        varTemp += getDaysInMonth(((varMonth + 1) + i), varYear);
    }
//    cout << varTemp << " days until EoY (not including the current month)" << endl;
//    cout << (getDaysInMonth(varMonth, varYear) - (varDay)) << " days left in the currently set month" << endl;
//    cout << varTemp << endl;
    varTemp += (getDaysInMonth(varMonth, varYear) - (varDay));
    varTemp += 1;       // Include last day of the year

    return varTemp;
}

string dateType::addDays(int x) {
    string varReturn;
//    int monthArr[13] = {0, 31, 28, 31, 30, 31, 30,
//                        31, 31, 30, 31, 30, 31};
//    int daysLeftInMonth;
//
//    daysLeftInMonth = monthArr[varMonth] - varDay;
//
//    if (daysLeftInMonth >= x)
//        varDay = varDay + x;
//    else {
//        varDay = 1;
//        varMonth++;
//        x = x - (daysLeftInMonth + 1);
//
//        while (x > 0)
//            if (x >= monthArr[varMonth]) {
//                x = x - monthArr[varMonth];
//                if ((varMonth == 2) && isLeapYear(varYear) == "True") {
//                    x--;
//                    varMonth++;
//                }
//                if (varMonth > 12) {
//                    varMonth = 1;
//                    varYear++;
//                }
//            }
//            else {
//                varDay = varDay + x;
//                x = 0;
//            }
//    }
//    cout << "varDay: " << varDay << " varMonth: " << varMonth << endl;


    return varReturn;
}

dateType::dateType(){
    varMonth = 1;
    varDay = 1;
    varYear = 1900;
}

dateType::dateType(int x, int y, int z) {
    varMonth = 1;
    varDay = 1;
    varYear = 1900;
}
#include "exDateType.h"
#include "dateType.h"
#include <string>
#include <iostream>
using namespace std;


string months[] = {" ", "January", "February", "March", "April", "May", "June", "July",
                   "August", "September", "October", "November", "December"};


void exDateType::setDate(int x, int y, int z) {
    dateType::setDates(z, y, z);
    varMonth2 = months[getMonth()];
}

void exDateType::setMonth(int m) {
    dateType::setMonth(m);
    varMonth2 = months[getMonth()];
}

void exDateType::printLongDate() {
    cout << varMonth2 << " " << varDay2 << ", " << varYear2 << endl;
}

void exDateType::printLongMonthYear() {
    cout << varMonth2 << " " << varYear2 << endl;
}

exDateType::exDateType(int x, int y, int z): dateType(1, 1, 1900) {
    varMonth2 = months[getMonth()];
    varDay2 = getDay();
    varYear2 = getYear();
}
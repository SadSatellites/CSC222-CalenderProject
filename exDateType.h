#ifndef PROJECT_6_DATETYPE_PROJECT_EXDATETYPE_H
#define PROJECT_6_DATETYPE_PROJECT_EXDATETYPE_H

#include <string>
#include <iostream>
#include "dateType.h"
using namespace std;

class exDateType: public dateType {
    public:
    void printLongDate();       // Prints date in long form
    void printLongMonthYear();      // Prints date in long month year form
    void setDate(int x, int y, int z);      // Sets date
    void setMonth(int x);       // Sets month
    exDateType(int=1, int=1, int=1900);     // Constructor

    private:
    string varMonth2;
    int varDay2, varYear2;
    static string MyMonths[13];


};

#endif

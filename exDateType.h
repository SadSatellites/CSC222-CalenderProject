#ifndef PROJECT_6_DATETYPE_PROJECT_EXDATETYPE_H
#define PROJECT_6_DATETYPE_PROJECT_EXDATETYPE_H

#include <string>
#include <iostream>
#include "dateType.h"
using namespace std;

class exDateType: public dateType {
    public:
    void printLongDate();
    void printLongMonthYear();
    void setDate(int x, int y, int z);
    void setMonth(int x);
    exDateType(int=1, int=1, int=1900);

    private:
    string varMonth2;
    int varDay2, varYear2;
    static string MyMonths[13];


};

#endif

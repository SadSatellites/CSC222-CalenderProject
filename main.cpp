#include <iostream>
#include <string>
#include "dayType.h"
#include "dateType.h"
#include "exDateType.h"

using namespace std;

int main() {
//    dateType dateType;
    class exDateType exDateType;
    int varMonth, varDay, varYear, x, y;

    cout << "Defaults: " << endl;
    cout << exDateType.getMonth() << " | " << exDateType.getDay() << " | " << exDateType.getYear() << "\n\n" << endl;

    cout << "Enter a year to test for leap year: " << endl;
    cin >> x;
    cout << exDateType.isLeapYear(x) << endl;

    cout << "\n\nEnter a month then year to get the number of days from that month in that year: " << endl;
    cin >> x;
    cin >> y;
    cout << "There are " << exDateType.getDaysInMonth(x, y) << " days." << endl;

    cout << "\nChanging current working date to February 2nd, 2008" << endl;
    exDateType.setDates(2, 2, 2008);       // Set working date to February 2nd, 2008;
    exDateType.printDate();

    cout << exDateType.daysSinceBoY() << " days have passed since the beginning of the year." << endl;
    cout << exDateType.daysUntilEoY() << " days until the end of the year (NOT including currently set day)." << endl;

    cout << "\nHow many days would you like to add to the current date of: " << exDateType.printDate() << endl;
    cin >> x;
    exDateType.addDays(x);
    //// NOTE:
    // The addDays function currently does not function properly when adding 60<= days.

    cout << "\n" << endl;
    exDateType.printLongDate();
    exDateType.printLongMonthYear();


    return 0;
}

//int main()
//{
//    dayType dayType;
//    class dayType SecondInit("Monday");
//
//    string x;
//    int y;
//
//    dayType;        // Create day object using default constructor
//
////    cout << "Set day of the week: " << endl;
////    cin >> x;
////    dayType.setDay(x);
//    dayType.printDay();     // Prints currently set day
//    cout << "Getday: " << dayType.getDay() << endl;       // Returns currently set daw as string
//    cout << "Get Previous Day: " << dayType.previousDay() << endl;        // Returns previous day of the week
//    cout << "Get Next Day: " << dayType.nextDay() << endl;        // Returns next day of the week
//
////    cout << "\nHow many days do you want to add?" << endl;
////    cin >> y;
////    dayType.addDay(y);
//
//    cout << "\n\nSecond Object Initialization for Monday." << endl;
//    SecondInit;     // Create day object initialized on Monday.
//    cout << "From constructor with parameters: " << SecondInit.getDay() << endl;
//    SecondInit.addDay(3);
//    SecondInit.addDay(30);
//    SecondInit.addDay(365);
//    //// NOTE:
//    //      The instructions say that the +30 days should equal Saturday and the +365 days should equal Sunday.
//    //      From my own testing I don't see how you could get those days unless I am misunderstanding the instructions.
//    //      Any day of the week +30 days is the same day of the week +2 days since there are 7 days in a week and...
//    //      the days of the week loop. 7 * 4 = 28. 30 - 28 = 2. This applies to the +365 days as well.
//
//
//    return 0;
//}


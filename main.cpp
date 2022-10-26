#include <iostream>
#include <string>
#include "dayType.h"
using namespace std;


int main()
{
    dayType dayType;
    class dayType SecondInit("Monday");

    string x;
    int y;

    dayType;        // Create day object using default constructor
    dayType.printDay();     // Prints currently set day
    cout << "Getday: " << dayType.getDay() << endl;       // Returns currently set daw as string
    cout << "Get Previous Day: " << dayType.previousDay() << endl;        // Returns previous day of the week
    cout << "Get Next Day: " << dayType.nextDay() << endl;        // Returns next day of the week

    cout << "\n\nSecond Object Initialization for Monday." << endl;
    SecondInit;     // Create day object initialized on Monday.
    cout << "From constructor with parameters: " << SecondInit.getDay() << endl;
    SecondInit.addDay(3);
    SecondInit.addDay(30);
    SecondInit.addDay(365);
    //// NOTE:
    //      The instructions say that the +30 days should equal Saturday and the +365 days should equal Sunday.
    //      From my own testing I don't see how you could get those days unless I am misunderstanding the instructions.
    //      Any day of the week +30 days is the same day of the week +2 days since there are 7 days in a week and...
    //      the days of the week loop. 7 * 4 = 28. 30 - 28 = 2. This applies to the +365 days as well.


    return 0;
}

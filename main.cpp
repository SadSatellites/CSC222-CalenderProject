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
    cout << "\nGetday: " << dayType.getDay() << endl;       // Returns currently set daw as string
    cout << "\nGet Previous Day: " << dayType.previousDay() << endl;        // Returns previous day of the week
    cout << "\nGet Next Day: " << dayType.nextDay() << endl;        // Returns next day of the week

    cout << "\n\nSecond Initialization for Monday." << endl;
    SecondInit;     // Create day object initialized on Monday.
    cout << SecondInit.getDay() << endl;
    SecondInit.addDay(3);
    SecondInit.addDay(30);
    SecondInit.addDay(365);

    return 0;
}

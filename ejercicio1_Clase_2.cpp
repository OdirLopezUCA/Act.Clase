#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int numberWeek;

    cout << "Write your number of the week (1-7): " << endl;
    cin >> numberWeek;

    if (numberWeek < 1 || numberWeek > 7)
    {
        cout << "Incorrect number. Enter a valid number.";
        return 0;
    }
    else
    {
        if (numberWeek == 1)
        {
            cout << "The day of the week is: Monday." << endl;
            
        }
        else if (numberWeek == 2)
        {
            cout << "The day of the week is: Thuesday." << endl;
            
        }
        else if (numberWeek == 3)
        {
            cout << "The day of the week is: Wednesday." << endl;
            
        }
        else if (numberWeek == 4)
        {
            cout << "The day of the week is: Thursday." << endl;
            
        }
        else if (numberWeek == 5)
        {
            cout << "The day of the week is: Friday." << endl;
            
        }
        else if (numberWeek == 6)
        {
            cout << "The day of the week is: Saturday." << endl;
            
        }
        else if (numberWeek == 7)
        {
            cout << "The day of the week is: Sunday." << endl;
            
        }
    }

    return 0;
}

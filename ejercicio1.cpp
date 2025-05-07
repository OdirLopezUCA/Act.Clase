#include <iostream>
using namespace std;

int main()
{
    int grade;
    char letterGrade;

    cout << "Enter the students grade: ";
    cin >> grade;

    if (grade < 0 || grade > 100 || cin.fail())
    {
        cout << "Invalid grade. Please enter a value between 0 and 100." << endl;
        return 1;
    }
    else
    {
        if (grade >= 90)
        {
            letterGrade = 'A';
        }
        else if (grade >= 85)
        {
            letterGrade = 'B';
        }
        else if (grade >= 80)
        {
            letterGrade = 'C';
        }
        else if (grade >= 70)
        {
            letterGrade = 'D';
        }
        else if (grade >= 69)
        {
            letterGrade = 'E';
        }
        else
        {
            letterGrade = 'F';
        }

        switch (letterGrade)
        {
        case 'A':
            cout << "Excellent!" << endl;
            break;
        case 'B':
            cout << "Very Good!" << endl;
            break;
        case 'C':
            cout << "Good!" << endl;
            break;
        case 'D':
            cout << "Needs Improvement!" << endl;
            break;
        case 'E':
            cout << "Needs Improvement!" << endl;
            break;
        case 'F':
            cout << "Fail!" << endl;
            break;
        default:
            break;
        }
    }

    return 0;
}
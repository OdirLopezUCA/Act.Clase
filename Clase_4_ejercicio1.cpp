#include <iostream>

using namespace std;

int main ()
{
    int number1;
    int number2;

    cout<<"Write 2 numbers (1-100) ";
    cout<<"Write your first number ";
    cin>>number1;
    cout<<"Write your second number ";
    cin>>number2;

    if ( number1 > number2)
    {
        cout<<"The number " <<number1 <<" is more closer to the number 100 ";
    }
    else if( number2 > number1 )
    {
        cout<<"The number "<< number2<<" is more closer to the number 100 ";
    }
    else
    {

    }

    return 0;
}5
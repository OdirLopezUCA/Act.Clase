#include <iostream>
using namespace std;

int main ()
{
    int number;
    cout<<"Write your note ";
    cin>>number;

    if (number =<50)
    {
        cout<<"Your performance is failed";

    }
    else if (number => 51  && 59)
    {
        cout<<"barely approved";
    }
    else if (number => 60  && 74)
    {
        cout<<"approved";
    }
    else if (number => 75  && 84)
    {
        cout<<"Good";
    }
    else if (number => 85  && 95)
    {
        cout<<"Very Good";
    }
    else (number => 96  && 100)
    {
        cout<<"su numero es negativo";
    }

    return 0;
}
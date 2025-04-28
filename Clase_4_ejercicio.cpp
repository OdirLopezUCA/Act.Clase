#include <iostream>

using namespace std;

#include <cmath>

int main()
{
    int kg; 
    int money;

    cout<<"Write your kilogramos";
    cin>>kg;


    if ( kg <= 5 )
    {
        cout<<"insert 5 dollars ";
        cin>>money;
    }
    else if ( kg >= 6 && kg <= 10)
    {
        cout<<"insert 10 dollars ";
        cin>>money;
    }
    else if ( kg > 10 )
    {
        cout<<"insert 15 dollars ";
        cin>>money;
    }
    else
    {

    }

return 0;
}
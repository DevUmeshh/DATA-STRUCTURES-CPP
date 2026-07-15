#include<iostream>
using namespace std;

int main()
{
    int units;
    double bill;

    cout<<"Enter Units: ";
    cin>>units;

    if(units<=100)
        bill=units*5;

    else if(units<=200)
        bill=units*7;

    else
        bill=units*10;

    cout<<"Electricity Bill = "<<bill;

    return 0;
}
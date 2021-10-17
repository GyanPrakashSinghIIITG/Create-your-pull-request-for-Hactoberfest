/*  C++ Program to convert inches to feet yards and inches  */

#include<iostream>
using namespace std;

int main()
{
    int y,f,i;
    cout<<"Enter Inches to Convert ::";
    cin>>i;

    y=i/432;
    i=i%432;
    f=i/12;
    i=i%12;

    cout<<"\nAfter Conversion from inches to feet, yards and inches :: \n";
    cout<<"\nYards = "<<y<<"\n\nFeet = "<<f<<"\n\nInches = "<<i<<"\n";

    return 0;
}

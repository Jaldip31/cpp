//implicit-explicit conversions
#include<iostream>
using namespace std;
int main()
{
    int x=10;
    float y=2.5;
    char ch='A';

    y=x+y;
    x=x+y;

    cout<<"\n y"<<y;   //12.5=10+2.5 beacause float y
    cout<<"\n x"<<x;   //22 =10+12.5 because int x

    ch=x+ch;
    cout<<"\n ch"<<()ch;

}
/*
  y12.5
 x22
 ch87
 */
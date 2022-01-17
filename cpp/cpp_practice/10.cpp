#include<iostream>
using namespace std;
class odd
{
    public:
    int a=0,c,i;
    for(i=1;i<10;i+=2)
    {
        c=a+i;
        a=c;
    }
    cout<<c;
};

int main()
{
    odd obj;
}
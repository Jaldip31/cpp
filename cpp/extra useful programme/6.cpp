#include<iostream>
using namespace std;
class box
{
    public:
    static int objcount;    //variable
    box()
    {
        cout<<"constructor called..."<<endl;
    }
    static int getcount()
    {
        return objcount++;
    }
};
int box::objcount;
int main()
{
    cout<<"inital stage count:"<<box::getcount()<<endl;
    box b1;
    box b2;
    cout<<"final stage count:"<<box::getcount()<<endl;
}
/*
inital stage count:0
constructor called...
constructor called...
final stage count:1
*/

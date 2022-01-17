//0.5	1	2.5		5	8.5
#include <iostream>
using namespace std;
int main()
{
	float i,a,c=0.5;
	for(i=0.5;i<5;i++)
	{
		cout<<"\t"<<c;
		a=c;
		c=a+i;
	}
}

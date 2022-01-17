//	1	4	12	32	80
#include <iostream>
using namespace std;
int main()
{
	int i,a=1,b=1;
	for(i=1;i<6;i++)
	{
		cout<<"\t"<<a*b++;
		a*=2;
	}
}
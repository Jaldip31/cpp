//	1	1	2	3	5	8	13
#include <iostream>
using namespace std;
int main()
{
	int i,a=1,b=0,c;
	for(i=0;i<6;i++)
	{c=a+b;
		cout<<"\t"<<c;
		a=b;
		b=c;
	}
}


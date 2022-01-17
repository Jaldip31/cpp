//1	4	3	16	5
#include <iostream>
using namespace std;
int main()
{
	int i;
	for(i=1;i<=5;i++)
	{
		if(i%2==1)
		{
			cout<<"\t"<<i;
		}
		else
		{
			cout<<"\t"<<i*i;
		}
	}
}

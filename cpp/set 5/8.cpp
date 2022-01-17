#include <iostream>
using namespace std;
int main()
{
	char i;
	for(i='A';i<='I';i+=4)
	{
		cout<<"\t"<<i<<"\t"<<(char)(i+34);
		//cout<<i<<(char)(i+34);
	}
}
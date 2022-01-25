//array_reverse
#include <iostream>
using namespace std;
int main()
{
	int i,n=4,b,temp,a[5]={11,22,44,66,77};
	b=n;
	/*for(i=0;i<n;i++)
	{
		cin>>a[i];
	}*/
	for(i=0;i<=n;i++)
	{
		temp=a[i];
		a[i]=a[n];
		a[n]=temp;
		n--;
	}
	for(i=0;i<=b;i++)
	{
		cout<<a[i]<<endl;
	}
}
/*
77
66
44
22
11
*/
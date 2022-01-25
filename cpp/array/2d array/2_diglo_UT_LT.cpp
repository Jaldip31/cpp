// diglo_UT_LT
#include <iostream>
using namespace std;
int main()
{
	int i,j,a[5][5],d=0,u=0,l=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			cin>>a[i][j];
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"\t\t"<<a[i][j];
			(i==j)?d+=a[i][j]:(i<j)?u+=a[i][j]:(i>j)?l+=a[i][j]:0;
		}
		cout<<endl;
	}
//1
	cout<<"diglo       : "<<d<<endl;
	cout<<"upper table : "<<u<<endl;
	cout<<"lower table : "<<l<<endl;
//2
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"\t\t"<<a[j][i];
		}
		cout<<endl;
	}
}
/*
1 2 3 4 5 6 7 8 9
		1		2		3
		4		5		6
		7		8		9
diglo       : 15
upper table : 11
lower table : 19
		1		4		7
		2		5		8
		3		6		9

*/

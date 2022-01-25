// matrix_sum_multiply
#include <iostream>
using namespace std;
int main()
{
	int i,j,a[5][5],b[5][5];
	cout<<"enter A matrix"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			cin>>a[i][j];
	}
	cout<<"enter B matrix"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			cin>>b[i][j];
	}

	cout<<"\t--matrix a--\t\t--matrix b--\t\t--sum a+b--\t\t--multi a*b--\n";

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"\t\t"<<a[i][j];
		}
		for(j=0;j<3;j++)
		{
			cout<<"\t\t"<<b[i][j];
		}
		for(j=0;j<3;j++)
		{
			cout<<"\t\t "<<(a[i][j]+b[i][j]);
		}
		for(j=0;j<3;j++)
		{
			cout<<"\t\t "<<(a[i][j]*b[i][j]);
		}
		cout<<endl;
	}
}
/*
enter A matrix
1 2 3 4 5 6 7 8 9
enter B matrix
9 8 7 6 5 4 3 2 1
	--matrix a--					--matrix b--			--sum a+b--				--multi a*b--
		1		2		3		9		8		7		 10		 10		 10		 9		 16		 21
		4		5		6		6		5		4		 10		 10		 10		 24		 25		 24
		7		8		9		3		2		1		 10		 10		 10		 21		 16		 9
*/
#include <iostream>
using namespace std;
int main()
{
	int i,a[5],b[5],c[5],x=0,y=0,z=0,total,pr;
	char g;
	cout<<"enter marks of 3 subject :"<<endl;
	for(i=0;i<2;i++)
	{
		cin>>a[i];
		cin>>b[i];
		cin>>c[i];
		x+=a[i];
		y+=b[i];
		z+=c[i];
	}

	cout<<"rollno\t\ta\t\t\tb\t\t\tc\t\ttotal\t\tpr\t\tgrade\t\tP/F"<<endl;
	for(i=0;i<2;i++)
	{total=a[i]+b[i]+c[i];
	 pr=total/3;
	 g=(pr>80)?'A':(pr>70)?'B':(pr>60)?'C':(pr>50)?'D':(pr>34)?'E':'F';
		cout<<"\t\t"<<i<<"\t\t"<<a[i]<<"\t\t"<<b[i]<<"\t\t"<<c[i]<<"\t\t"<<total<<"\t\t"<<pr<<"\t\t"<<g;
	 (a[i]>=33 && b[i]>=33 && c[i]>=33)?cout<<"\t\tpass\n":cout<<"\t\tfail\n";
	 }

	 cout<<"total\t\t"<<x<<"\t\t"<<y<<"\t\t"<<z<<"\t\t"<<total;
}
/*
enter marks of 3 subject :
11 76 45
99 90 89
rollno		a			b			c		total		pr		grade		P/F
		0		11		76		45		132		44		E		fail
		1		99		90		89		278		92		A		pass
total		110		166		134		278
*/

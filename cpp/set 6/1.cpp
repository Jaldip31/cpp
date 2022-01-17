#include <iostream>
using namespace std;
int main()
{//1
	{int i,j;
	for(i=1;i<6;i++){
		for(j=1;j<=i;j++)
			cout<<j;
		cout<<"\n";
	}}
//2
	{int i,j;
	for(i=1;i<6;i++){
		for(j=1;j<=i;j++)
			cout<<i;
		cout<<endl;
	}}
//3
	{int i,j;
	for(i=5;i>0;i--){
		for(j=5;j>=i;j--)
				cout<<i;
		cout<<endl;
	 }}
//4
	{int i,j,a=1;;
	 for(i=1;i<6;i++){
	 	for(j=1;j<=i;j++)
	 		cout<<a++;
	 	cout<<endl;
	 }}
//5
	{int i,j;
	 for(i=5;i>0;i--){
	 	for(j=5;j>=i;j--)
	 		cout<<j;
	 	cout<<endl;
	 }}
//6
	{char i,j;
	 for(i='A';i<'F';i++){
	 	for(j='A';j<=i;j++)
	 		cout<<j;
	 	cout<<endl;
	 }}
//7
	{char i,j,a=64;
	 for(i='A';i<'F';i++){
	 	for(j='A';j<=i;j++){a++;
	 		if(i%2==1)
	 			cout<<a;
	 		else
	 			cout<<(char)(a+32);}
	 	cout<<endl;
	 }}
//8
	{int i,j,a=64;
	 for(i=1;i<6;i++){
	 	for(j=1;j<=i;j++){a++;
	 		if(j%2==1)
	 			cout<<(char)(a+32);
	 		else
	 			cout<<(char)a;}
	 	cout<<endl;
	 }}
//9
	{char i,j,a='A';
	 for(i='A';i<'F';i++){
	 	for(j='A';j<=i;j++)
	 		cout<<a++;
	 	cout<<endl;
	 }}
//10
	{int i,j,a;
	 for(i=5;i>0;i--){a=i;
	 	for(j=5;j>=i;j--)
	 		cout<<a++;
	 	cout<<endl;
	 }}
//11
	{int i,j,a=0;
	 for(i=1;i<6;i++){
	 	for(j=1;j<=i;j++){a++;
	 		(a%2==1)?cout<<"0":cout<<"1";}
	 	cout<<endl;
	 }}
//12
	{char i,j,a;
	 for(i='A';i<'F';i++){a=i;
	 	for(j='A';j<=i;j++)
	 		cout<<a--;
	 	cout<<endl;
	 }}
}

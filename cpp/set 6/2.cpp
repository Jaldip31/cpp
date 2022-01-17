#include <iostream>
using namespace std;
int main()
{//1
	{int i,j;
	for(i=1;i<6;i++){
		for(j=1;j<=i;j++)
		cout<<"*";
	cout<<endl;
	}}
//2
	{int i,j;
	for(i=5;i>0;i--){
		for(j=1;j<=i;j++)
			cout<<"*";
		cout<<endl;
	}}
//3
	{int i,j,sp=4;
	for(i=1;i<5;i++){
		for(j=1;j<=sp;j++)
			cout<<"  ";
		sp--;
		for(j=1;j<=i;j++)
			cout<<"*";
		cout<<endl;
	}}
//4
	{int i,j,sp=0;
	for(i=5;i>0;i--){
		for(j=1;j<=sp;j++)
			cout<<"  ";
		sp++;
		for(j=1;j<=i;j++)
			cout<<"*";
		cout<<endl;
	}}
//5
	{int i,j,sp=4;
	for(i=1;i<6;i++){
		for(j=1;j<=sp;j++)
			cout<<"  ";
		sp--;
		for(j=1;j<i*2;j++)
			cout<<"*";
		cout<<endl;
	}}
//6
	{int i,j,sp=0;
	for(i=1;i<6;i++){
		for(j=1;j<=sp;j++)
			cout<<"  ";
		sp++;
		for(j=10;j>=i*2;j--)
			cout<<"*";
		cout<<endl;
	}}



}

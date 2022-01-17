#include <iostream>
using namespace std;
int main()
{
	char i;
	for(i='A';i<='Z';i+=2)
	{
		cout<<"\t"<<i;
		cout<<"\t"<<(int)(i)<<endl;
		cout<<"\t"<<(char)(i+33);
		cout<<"\t"<<(int)(i+33)<<endl;
	}
}
/*
	A	65
	b	98
	C	67
	d	100
	E	69
	f	102
	G	71
	h	104
	I	73
	j	106
	K	75
	l	108
	M	77
	n	110
	O	79
	p	112
	Q	81
	r	114
	S	83
	t	116
	U	85
	v	118
	W	87
	x	120
	Y	89
	z	122
*/
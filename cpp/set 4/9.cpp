#include <iostream>
using namespace std;
int main()
{
	char i;
	for(i='A';i<='Z';i+=2)
	{
		cout<<"\t"<<i;
		cout<<"\t"<<(char)(i+33);
	}
}
/*
A	b	C	d	E	f	G	h	I	j	K	l	M	n	O	p	Q	r	S	t	U	v	W	x	Y	z
*/

#include<stdio.h>
int main()
{
	char a,b;
	int x;
	a='a'; //Arithmetic Instruction only store as Number -> Characters stored as ASCII Value
	b='b';
	printf("%c %d\n",a,a);
	printf("%c %d\n",b,b);
	b=b-32;
	printf("%c %d\n",b,b);
	x=a+b; //Arithmetic addition of two chars -> promoted to ASCII Int value added then demoted to char again but resultant is int because of x
	printf("%c %d",a+b,x);
}

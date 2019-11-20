#include<stdio.h>
#include<math.h>
int main()
{
	/* Area of Triangle when three sides are given */ /*These are C Styled comments single line comments are C++ */
	float a,b,c,s,area;
	printf("Enter the three sides of the triangle\n");
	printf("Enter side A: ");
	scanf("%f",&a);
	printf("Enter side B: ");
	scanf("%f",&b);
	printf("Enter side C: ");
	scanf("%f",&c);
	s=(a+b+c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area of the triangle is %f",area);
	return 0;
}

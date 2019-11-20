#include<stdio.h>
#include<math.h>
int main()
{
	float x1,y1,x2,y2,x3,y3,area;
	printf("Enter sides of Triangle\n");
	printf("Enter side 1: ");
	scanf("%f%f",&x1,&y1);
	printf("Enter side 2: ");
	scanf("%f%f",&x2,&y2);
	printf("Enter side 3: ");
	scanf("%f%f",&x3,&y3);
	area=abs((x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))); /* Area is always positive so take absolute of determinant */
	area=area/2;
	printf("Area of Triangle is %f",area);
	return 0;
}

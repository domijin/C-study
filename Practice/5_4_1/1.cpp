#include<stdio.h>
void dx(float a,float b,float c)
{
	if (a>b&&a>c) printf("the max is %f\n",a);
	else dx(b,c,a);
}
void main()
{
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	dx(a,b,c);
}
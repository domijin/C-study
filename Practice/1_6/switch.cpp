#include<stdio.h>
int main()
{
    float a,b,c;
	printf("input 2 numbers:\n");
	scanf("%f%f",&a,&b);
	printf("%f,%f\n",a,b);
	c=a;a=b;b=c;
	printf("%f,%f\n",a,b);
	return 0;
}

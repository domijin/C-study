#include<stdio.h>
#include<math.h>
#define f(x) (x*x-asin(x))
void main()
{
	double s=0,x;
	int n;
	scanf("%d",&n);
	for(x=0;x<=1;x+=1.0/n)
	    s+=f(x)/n;
	printf("%f\n",s);
}
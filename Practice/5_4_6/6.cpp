#include<stdio.h>
float p(int n,float x)
{
	if (n==0) return 1;
	else if (n==1) return x;
	else return ((2*n-1)*x*p(n-1,x)-(n-1)*p(n-2,x))/n;
}
void main()
{
	int n;
	float x;
	scanf("%d%f",&n,&x);
	printf("%f\n",p(n,x));
}
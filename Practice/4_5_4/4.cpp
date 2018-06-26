#include<stdio.h>
void main()
{
	double e=0,E,f(int);
	int n,t(double);
	scanf("%lf",&E);
    n=t(E);
    for (int i=1;i<=n;i++)
		e+=1/f(i);
	printf("e=%f\n",e);
}
double f(int x)
{
	double y=1;
	for(int i=1;i<=x;i++)
		y*=i;
	return y;
}
int t(double x)
{   int i=1;
	while (1/f(i)>x)
		i++;
    return i;
}
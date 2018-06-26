#include<stdio.h>
void main()
{
	int n,k;
	void digit(int,int);
	scanf("%d%d",&n,&k);
	digit(n,k);
}
void digit(int n,int k)
{
	for(int i=1;i<=k-1;i++)
		n=n/10;
	printf("%d\n",n%10);
}
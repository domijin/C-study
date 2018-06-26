#include<stdio.h>
int ws(int n)
{
	int m=0;
	for(int i=1;i<n;i++)
		if (n%i==0)
			m+=i;
	if (n==m) return 1;
	else return 0;
}
void main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",ws(n));
}

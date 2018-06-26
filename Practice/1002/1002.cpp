#include<stdio.h>
#include<math.h>
void main()
{
	double n;
	int x=0,k=0;
	while(scanf("%lf",&n),n!=0)
	{
		for(int i=1;i<=n/2;i++)
		   for(int j=1;j<=n/i;j++)
			   if (pow(i,j)==n)
				   x=i,k=j;
		printf("%d %d\n",x,k);
	}
}
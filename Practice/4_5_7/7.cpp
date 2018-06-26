#include<stdio.h>
#include<math.h>
void main()
{
	int n;
	double k=0;
	scanf("%d",&n);
	while (n)
	{
		k=sqrt(k+n--);
	}
	printf("%f\n", k);
}

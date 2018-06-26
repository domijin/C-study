#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
	double k,x;
	scanf("%lf",&k);
	for (x=1;;)
	{
		if (fabs((k/x/x-x)/3)<1e-14)
		{
			printf("%.14f\n",x);
			exit(0);
		}
		else x=x+(k/x/x-x)/3;
	}
}

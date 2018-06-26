#include<stdio.h>
#include<math.h>
#define N 30
void main()
{
	double s=0,x,a[N]={{0}};int n,i;
	scanf("%d%lf",&n,&x);
	for (i=0;i<N;i++)
	{ scanf("%lf",&a[i]);
	  s+=a[i]*pow(x,i);
	}
	printf("%f\n",s);
}
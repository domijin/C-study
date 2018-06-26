#include<stdio.h>
#include<math.h>
#define N 20
void main()
{
	float t,a[N]={{0}};int i,k;
	for (i=0;i<N;i++)
		scanf("%f",&a[i]);
	for (i=0;i<N-1;i++)
	{
		k=i;
		while(fabs(a[k])>fabs(a[k+1])&&k>=0)
		{
			t=a[k];a[k]=a[k+1];a[k+1]=t;
			k--;
		}
	}
	for (i=0;i<N;i++)
		printf("%f\t",a[i]);
}
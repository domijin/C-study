#include<stdio.h>
#include<math.h>
#define N 10
void main()
{
	float s=0,x[N],y[N];int i,j;
	for (i=0;i<N;i++)
		scanf("%f%f",&x[i],&y[i]);
	for (i=0;i<N-1;i++)
		for (j=i+1;j<N;j++)
			s+=sqrt(pow(x[i]-x[j],2)+pow(y[i]-y[j],2));
	printf("%f\n",s);
}
#include<stdio.h>
#include<math.h>
void main()
{
	double r=0,x;
	int n;
	printf("please input x n\n");
	scanf("%lf%d",&x,&n);
	for(int i=1;i<=n+1;i++)
	{
		float a;
		scanf("%f",&a);
		r+=a*pow(x,i-1);
	}
	printf("result is %f\n",r);
}
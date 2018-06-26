#include<stdio.h>
#include<math.h>
int main()
{
	float x,y;
	scanf("%f",&x);
	if (x>=0&&x<=1) y=x+cos(x);
	else y=x+sin(x);
	printf("y=%f\n",y);
}
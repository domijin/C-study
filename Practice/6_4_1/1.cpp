#include<stdio.h>
#include<math.h>
#define dx(a,b) fabs(a)<fabs(b)?a:b
void main()
{
	float x,y,z;
	scanf("%f%f%f",&x,&y,&z);
	printf("%f\n",dx(dx(x,y),z));
}
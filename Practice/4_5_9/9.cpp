#include<stdio.h>
void main()
{
	float f(float),max=-100,min=100;
	for(float x=-2;x<=2;x+=0.5)
	max=max>f(x)?max:f(x),
	min=min<f(x)?min:f(x);
	printf("fmax is %f,fmin is %f\n",max,min);
}
float f(float x)
{
	return x*x-3.14*x-6;
}
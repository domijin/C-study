#include <stdio.h>
int main()
{
	float a,b;
	scanf("%f",&a);
	a=(int)(a*100+0.5)/100.0;
	printf("%.2f\n",a);
    b=(int)(a*10)/10.0;
	printf("%.1f\n",b);
}

#include <stdio.h>
float min (float x,float y)
{
    if (x<y) return x;
		else return y;
}
float main()
{
    float a,b,c,d;
	printf("������3������\n");
	scanf("%f%f%f",&a,&b,&c);
	d=min(a,b);
	d=min(d,c);
	printf("%.3f,%.3f,%.3f�е���Сֵ��%.3f\n",a,b,c,d);
	return 0;
}

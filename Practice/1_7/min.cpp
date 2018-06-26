#include <stdio.h>
float min (float x,float y)
{
    if (x<y) return x;
		else return y;
}
float main()
{
    float a,b,c,d;
	printf("请输入3个数字\n");
	scanf("%f%f%f",&a,&b,&c);
	d=min(a,b);
	d=min(d,c);
	printf("%.3f,%.3f,%.3f中的最小值是%.3f\n",a,b,c,d);
	return 0;
}

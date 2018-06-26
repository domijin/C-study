#include<stdio.h>
int f(int a,int b)
{
	int c=b;
	if (a>b)
		b=a,a=c;
	while(b%a)
	{
		c=b=b-a;
	    if (a>b)
			b=a,a=c;
	}
    printf("最大公约数是%d,最小公倍数是",a);
	return a;    
}
void main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=f(a,b);
	printf("%d\n",a*b/c);
}

#include<stdio.h>
void main()
{
	int x,y,a,b,c,d;
	scanf("%d%d",&x,&y);
	a=x<y?x:y;
	b=x>y?x:y;
	while(b%a)
		c=a,d=b-a,a=c<d?c:d,b=c>d?c:d;
	printf("最小公倍数是%d,最大公约数是%d\n",x*y/a,a);
}
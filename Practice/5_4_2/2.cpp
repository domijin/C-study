#include<stdio.h>
void main()
{
	int a,b;
	void pd(int);
	scanf("%d%d",&a,&b);
	if(a>1&&a<=b)
		pd(a);
	else printf("wrong input\n");
}
void pd(int a)
{
	for(int i=2;i<=a;i++)
		if (a%i==0&&a!=i)
		{printf("no\n");break;}//break ���������� ���ű��ʽ����why?
	printf("yes\n");
}
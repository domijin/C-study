#include <stdio.h>
void main()
{
	int i,max=0,min=100,n;
	for(i=1;i<=10;i++)
	{
		scanf("%d",&n);
		max=max>n?max:n;
		min=min<n?min:n;
	}
	printf("max is %d,min is %d\n",max,min);
}
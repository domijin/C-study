#include<stdio.h>
#include<math.h>
void main()
{
	float x;
	for (int i=1;i<=5000;i++)
	{x=(double)i*(double)i;
	if ((int)(x-i)%(int)pow(10,(int)log10(i)+1)==0)
		printf("%d\t",i);
	}
}
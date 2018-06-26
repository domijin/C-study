#include<stdio.h>
void main()
{
	float a[10],t;           //a 0 1 2 3 4 5 6 7 8 9 10
	int i=1;                 //  1
	scanf("%f",&a[0]);       
	while(scanf("%f",&t),i<9)//t 2
	{
		i++;                 //i 2
		for (int k=0;k<i;k++)//k 0
			if (t>a[k]){     //j 1
			for (int j=i-1;j>k;j--)
			   a[j]=a[j-1];
			a[k]=t;
		   	break;
			}
	}
	for (i=0;i<9;i++)
		printf("%f>",a[i]);
	printf("%f\n",a[10]);
}
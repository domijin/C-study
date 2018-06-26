#include<stdio.h>
void main()
{
	float a[5][6],min;
	int x,y,xm,ym;
	for (x=0;x<5;x++)
		for (y=0;y<6;y++)
		{
			if (x==0&&y==0) {
				scanf("%f",&a[0][0]);
	            min=a[0][0];xm=1;ym=1;
			}
			else {
				scanf("%f",&a[x][y]);
			    if (min>a[x][y])
				min=a[x][y],xm=x+1,ym=y+1;
			}
		}
	for (x=0;x<5;x++) {
	    for (y=0;y<6;y++) 
			printf("a[%d][%d]=%.2f ",x+1,y+1,a[x][y]);
		putchar('\n');
	}
	printf("amin[%d][%d]=%.2f\n",xm,ym,min);
}

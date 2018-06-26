#include<stdio.h>
void main()
{
	float a[5][6],max[5];
	int x,y;
	for (x=0;x<5;x++)
		for (y=0;y<6;y++)
		{
			if (y==0) {
				scanf("%f",&a[x][0]);
	            max[x]=a[x][0];
			}
			else {
				scanf("%f",&a[x][y]);
			    if (max[x]<a[x][y])
				max[x]=a[x][y];
			}
		}
	for (x=0;x<5;x++) {
	    for (y=0;y<6;y++) 
			printf("a[%d][%d]=%.2f ",x+1,y+1,a[x][y]/max[x]);
		putchar('\n');
	}
}

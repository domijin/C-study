#include<stdio.h>
#define N 60
void main()
{
	char str[4][N],ch;
	int i,j;
	for (i=0;i<4;i++)
		gets(str[i]);
	for (i=0;i<4;i++)
		for (j=0;j<N;j++)
			if (str[i][j]=='$') str[i][j]='S';
	for (i=0;i<4;i++)
		puts(str[i]);
}
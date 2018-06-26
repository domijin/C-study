#include<stdio.h>
#include<string.h>
#define N 61
void main()
{
	char str[4][N];
	int i,j;
	for (i=0;i<4;i++)
		gets(str[i]);
	for (i=0;i<4;i++)
		for (j=0;str[i][j]!='\0';)
			if (str[i][j]=='$') 
				strcpy(str[i][j],str[i][j+1]);
			else j++;
        for (i=0;i<4;i++)
                puts(str[i]);
}
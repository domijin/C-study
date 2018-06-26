#include<stdio.h>
void main()
{
	char ch,s[60];int i=0;
	while (ch=getchar(),ch!=EOF)
		if (ch!=' ') s[i]=ch,i++;
	for (int k=0;k<i;k++)
		printf("%c",s[k]);
}
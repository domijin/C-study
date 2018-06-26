#include<stdio.h>
#include<string.h>
void main()
{
   char s[61];int i;
   gets(s);
   for (i=0;s[i]!='\0';)
     if (s[i]==' ') strcpy(s+i,s+i+1);
     else i++;
   puts(s);
}
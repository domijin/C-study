#include<stdio.h>
void main()
{
	int x;
	scanf("%d",&x);
	if (x>100||x<0) printf("error\n");
	else 
	switch (x/10){
	case 10:
	case  9: printf("A\n");break;
	case  8: printf("B\n");break;
	case  7: printf("C\n");break;
	case  6: printf("D\n");break;
 	default: printf("E\n");}
}
#include <stdio.h>
int countdigit(int number,int digit)
{
	int k=0;
    while(number!=0)
	{
		if(number%10==digit) 
			k+=1;
		number/=10;		
	}
    return k;
}
void main()
{
	int number,digit,result;
	printf("Please Enter number & digit\n");
	scanf("%d%d",&number,&digit);
	result=countdigit(number,digit);
	printf("the result is %d\n",result);
}
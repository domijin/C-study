#include<stdio.h>
#include<string.h>
#define N 20
#define M 30
void main()
{
    char str[N][M];
    int i,j,I,J,k=0,max=0;
    for (i=0;i<N;i++) gets(str[i]);
    J=j=0;
	for (i=0;i<N;i++) //行递进
		for (I=i+1;I<N;I++)  //行枚举
		    for (int l=0;l<N;l++)
			{   j=l;//标准行数据枚举
				{
					while (J<M) {
				      if (str[I][J]==str[i][j]) 
						  if (J==M-1||j==M-1) {k++,max=max>k?max:k,k=0;break;}
					      else J++,j++,k++,max=max>k?max:k;
				      else J++,k=0;
					}//数据比较
			        J=0;
				}
			}
	printf("%d\n",max);
}

#include<stdio.h>
#define N 20
#define M 30
void main()
{
	char str[N][M],ch;
	int i,j,I,J,k=0,max=0;
	for (i=0;i<N;i++){
		j=0;
		while (ch=getchar(),j<M)
			if (ch!='\n') str[i][j]=ch,j++;
	} //����
    J=j=0;
	for (i=0;i<N;i++) //�еݽ�
		for (I=i+1;I<N;I++)  //��ö��
		    for (int l=0;l<N;l++)
			{   j=l;//��׼������ö��
				{
					while (J<M) {
				      if (str[I][J]==str[i][j]) 
						  if (J==M-1||j==M-1) {k++,max=max>k?max:k,k=0;break;}
					      else J++,j++,k++,max=max>k?max:k;
				      else J++,k=0;
					}//���ݱȽ�
			        J=0;
				}
			}
	printf("%d\n",max);
}

		/*�߼�����Ĵ��룺
		//for (j=0;j<M;j++)
	{
			I=i++;J=j;
			while (I<N&&J<M)
			{
				if (str[I][J]==str[i][j]) {
					k++;
				    if (J==M-1) I++,J-=M-1;
				    else J++;
				    if (j==M-1) i++,j-=M-1;
				    else j++;			
					max=max>k?max:k;
				}
				else {
					k=0;
				    if (J==M-1) I++,J-=M-1;
				    else J++;
				    //if (j==M-1) i++,j-=M-1;
				    //else j++;
				}
			}
		}
	printf("%d\n",max);
}
*/

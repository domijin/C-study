#include<stdio.h>
void main()
{
	float AD[10]={0},BH[10]={0};
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
		scanf("%f",&AD[i]);
	for(i=0;i<m;i++)
		scanf("%f",&BH[i]);
	for(i=0;i<=n;i++)
	{   int N=0;
		for(int k=0;k<=m;k++)
			if (AD[i]==BH[k]) 
				N++;
			if (N==0)
				printf("%f\n",AD[i]);
	}
	for(i=0;i<=m;i++)
	{   int N=0;
		for(int k=0;k<=n;k++)
			if (BH[i]==AD[k]) 
				N++;
			if (N==0)
				printf("%f\n",BH[i]);
	}
}

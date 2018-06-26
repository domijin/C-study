#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void guss1(float **a,int n) //有回代的高斯消元法
{
	int i,j,k; float c;
	//行最简
	for(k=0;k<n;k++) {
	  c=a[k][k];
      for(j=k;j<n+1;j++) a[k][j]/=c;
	  for(i=k+1;i<n;i++) {
		  c=a[i][k];
		  for (j=k;j<n+1;j++) a[i][j]-=a[k][j]*c;
	  }
	}
	//回代
	for(k=n-2;k>=0;k--)
		for(j=k+1;j<n;j++)
			a[k][n]-=a[k][j]*a[j][n];
}

void guss2(float **a,int n)
{
    int i,j,k; float c;
	for(k=0;k<n;k++) {
	  c=a[k][k];
      for(j=k;j<=n;j++) a[k][j]/=c;
	  for(i=0;i<n;i++) {
		if(i==k) continue;
		c=a[i][k];
		for(j=k;j<=n;j++)
		  a[i][j]-=c*a[k][j];
	  }
	}
 }

void guss3(float **a,int n) //全主元高斯消元法
{  
	int *ij,i,j,L,M,k,k1; float c;//ij追踪列变换
	ij=(int*)malloc(n*sizeof(n));
	for(i=0;i<n;i++) ij[i]=i;
	for(k=0;k<n;k++) {
		c=a[k][k];
		for(i=k;i<n;i++)
			for(j=k;j<n;j++)
				if(fabs(a[i][j])>=fabs(c))
					c=a[i][j],L=i,M=j;
		for(j=k;j<n+1;j++)//行对调
			c=a[L][j],a[L][j]=a[k][j],a[k][j]=c;
		for(i=0;i<n;i++)//列对调
			c=a[i][M],a[i][M]=a[i][k],a[i][k]=c;
  		    k1=ij[M],ij[M]=ij[k],ij[k]=k1;
	  c=a[k][k];//无回代高斯消元
      for(j=k;j<=n;j++) a[k][j]/=c;
	  for(i=0;i<n;i++) {
		if(i==k) continue;
		c=a[i][k];
		for(j=k;j<=n;j++)
		  a[i][j]-=c*a[k][j];
	  }
	}
	for(k=0;k<n;k++)
		if(ij[k]!=k)//原流程图此步错误，会造成2次调换从而抵消效果。
			c=a[ij[k]][n],a[ij[k]][n]=a[k][n],a[k][n]=c,L=ij[k],ij[L]=ij[k],ij[k]=k;
	free(ij);
}

void diedai1(float **a,int n)
{ 
   float *x1,*x2,c; int i,j,k;
   x1=(float*)malloc(n*sizeof(float));
   x2=(float*)malloc(n*sizeof(float));
   for(k=0;k<n;k++) {    //改写
      c=a[k][k];
      for(j=0;j<n+1;j++) a[k][j]/=c;
   }
   for(k=0;k<n;k++)
	   a[k][k]=x1[k]=0;
aaa:
   for(k=0;k<n;k++)
	   x1[k]=x2[k],x2[k]=a[k][n];
   for(i=0;i<n;i++)
	   for(j=0;j<n;j++)
		   x2[i]-=a[i][j]*x1[j];
   if(fabs(x2[0]-x1[0])+fabs(x2[1]-x1[1])+fabs(x2[2]-x1[2])+fabs(x2[3]-x1[3])>=0.0001)
	   goto aaa;
   for(i=0;i<n;i++) a[i][n]=x2[i];  // 解送最后1列 
   free(x1);
   free(x2);
}

void diedai2(float **a,int n)
{  float *x,e=1,s,c; int i,j,k;
   x=(float*) malloc(n*sizeof(float));
   for(k=0;k<n;k++) {   //改写
      c=a[k][k];
      for(j=0;j<n+1;j++) a[k][j]/=c;
   }
   for(i=0;i<n;i++) x[i]=a[i][i]=0;   // 解赋初值
   while(e>=0.0001){
	   e=0;
	   for(i=0;i<n;i++){
		   s=a[i][n];
		   for(j=0;j<n;j++)
			   s-=a[i][j]*x[j];
		   if(fabs(s-x[i])>=e)
			   e+=fabs(s-x[i]); 
		   x[i]=s;
	   }
   }
   for(i=0;i<n;i++) a[i][n]=x[i];  // 解送最后1列 
   free(x);
}

 void main()
 {  int i,j,k;
    float a[4][5]={{8,2,1,2.5,1.5},{1,8,-0.5,2,-3},{1.5,2,8,-1,-4.5},{1,0.5,0.7,8,3.2}};
    float aa[4][5],*b[4]={aa[0],aa[1],aa[2],aa[3]};
    while(1) {
      printf("**************************************************************\n");
      printf("*  1. 有回代高斯消元法            2. 无回代高斯消元法        *\n");
      printf("*  3. 全主元高斯消元法            4. 简单迭代法              *\n");
      printf("*  5. 高斯-赛得尔迭代法           6. 退  出                  *\n");
      printf("**************************************************************\n");
      scanf("%d",&k); if(k==6) break;
      for(i=0;i<4;i++) 
	    for(j=0;j<5;j++) aa[i][j]=a[i][j];
      switch(k) { 
	    case 1: guss1(b,4); break;
        case 2: guss2(b,4); break;
        case 3: guss3(b,4); break;
        case 4: diedai1(b,4); break;
        case 5: diedai2(b,4); break;
	  }
      for(i=0;i<4;i++) printf("%.4f\t",aa[i][4]);
	  printf("\n");
	}
 }

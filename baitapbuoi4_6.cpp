#include<stdio.h>
int main()
{
  int n;
  printf("nhap so nguyen n :"); scanf("%d",&n);
  int s=0,s1=1,r=1;
  for(int i=1;i<=n;i++)
     {
     	if(i==n)
     	{
     		printf("so thu %d cua day Fibonacci la %d ",n,s1);
     	}	
     	s1=s1+s;
     	s=r;
     	r=s1;
     }	
}



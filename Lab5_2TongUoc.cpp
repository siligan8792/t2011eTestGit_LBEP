#include<stdio.h>
int main()
{
 int n,s=0;
 printf ("nhap n:");
 scanf("%d",&n);
 printf ("Cac uoc cua %d la : ",n);
	for(int i=1;i<=n;i++)
	{
		if (n%i==0)
		{
			printf("%d ",i);
			s=s+i;			
		}
	}
		printf ("\ntong uoc la %d",s);
}



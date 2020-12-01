#include<stdio.h>
#include<math.h>
int main ()
{
	int i,n,s=1;
	printf ("nhap n: ");
	scanf ("%d",&n);
	for (i=1;i<=n;i++)
	{
		s=s*i;
	}
	printf ("%d! = %d",n,s);
	
}



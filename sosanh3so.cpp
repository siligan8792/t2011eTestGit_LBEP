#include<stdio.h>
#include<math.h>
int main ()
{
	int a,b,c;
	printf ("nhap a: ");
	printf ("nhap b: ");
	printf ("nhap c: ");
	scanf ("%d%d%d",&a,&b,&c);
	
	if (a<b)
	
	{
		if 	(a<c)
		{
			printf ("so be la %d",a);
		
		}
		else
		{
			printf ("so be la %d",c);
		}
	}
		
	else 
	{
		if (b<c)
		{
			printf ("so be la %d",b);
		}
		else
		{
			printf ("so be la %d",c);
	
		}
	}
}



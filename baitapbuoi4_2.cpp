#include<stdio.h>
#include<math.h>
int main ()
{
	float i,n,s=0;
	for (i=1;i<=1000;i++)
	{
		s=s+(1/i);
	}
	printf ("%.6f",s);
}


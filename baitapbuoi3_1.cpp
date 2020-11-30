#include<stdio.h>
#include<math.h>
int main ()
{
	int n,x =0;
	printf("nhap n:");
	scanf ("%d",&n);
	x=x*10+n%10;
	n/=10;
	if(n!=0)
	{
		x = x*10 + n%10;
		n/=10;
	}
	if (n!=0)
	{
		x = x*10 + n%10;
		n/=10;
	}
	if (n!=0)
	{
		x = x*10 + n%10;
		n/=10;
	}
	if (n!=0)
	{
		x = x*10 + n%10;
		n/=10;
	}
	printf ("Dao nguoc la: %d", x);
}



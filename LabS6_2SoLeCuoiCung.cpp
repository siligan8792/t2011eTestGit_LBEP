#include<stdio.h>
#include<math.h>
int main ()
{
	int n, solecuoicung;
	printf ("nhap so phan tu: ");
	scanf ("%d",&n);
	int a[n];
	for (int i=0;i<n;i++)
	{
		printf ("a[%d]=",i);
		scanf ("%d",&a[i]);
	}
	for (int i=n-1;i<n;i--)
	{
		if (a[i]%2==1)
		{
			solecuoicung=a[i];
			break;
		}
	}
	printf ("so le cuoi cung la: %d",solecuoicung);
}


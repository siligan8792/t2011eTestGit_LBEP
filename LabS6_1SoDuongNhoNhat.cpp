#include<stdio.h>
#include<math.h>
int main ()
{
	int n,min,ok=0;
	printf ("nhap so phan tu cua mang: ");
	scanf ("%d",&n);
	int a[n];
	for (int i=0;i<n;i++)
	{
		printf ("a[%d]: ",i);
		scanf ("%d",&a[i]);
	}
	for (int i=0;i<n;i++)
	{
		if (a[i]>0)
		{
			min=a[i];
			break;
		}
	}
	for (int i=0;i<n;i++)
	{
		if (a[i]<=min&&a[i]>0)
		{
			min=a[i];
			ok=1;
		}
	}
	if (ok==0)
	{
		printf ("khong co so duong");
	}
	else
	{
		printf ("%d la so duong nho nhat",min);	
	}
}


#include<stdio.h>
#include<math.h>
int main ()
{
	int n,max=0,s=0;
	printf ("nhap so phan tu cua mang: ");
	scanf ("%d",&n);
	int a[n];
	for (int i=0;i<n;i++)
	{
		printf ("a[%d]=",i);
		scanf ("%d",&a[i]);
	}
	for (int i=0;i<n;i++)
	{
		if (a[i]>0)
		{
			s=s+a[i];
		}
		if (a[i]<=0)
		{
			s=0;
		}
		if (s>=max)
		{
			max=s;
		}
	}
	printf ("chuoi so duong co tong lon nhat la: %d",max);
	
}



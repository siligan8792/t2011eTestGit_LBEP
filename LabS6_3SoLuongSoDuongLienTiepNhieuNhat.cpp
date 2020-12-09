#include<stdio.h>
#include<math.h>
int main ()
{
	int n,dem=0,max=0;
	printf ("nhap so luong phan tu cua mang: ");
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
			dem++;
		}
		if (a[i]<=0)
		{
			dem=0;
		}
		if (dem>=max)
		{
			max=dem;
		}
	}
	printf ("so luong cac so duong lien tiep nhieu nhat la: %d",max);
}



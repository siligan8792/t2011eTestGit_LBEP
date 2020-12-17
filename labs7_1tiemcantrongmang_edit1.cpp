#include<stdio.h>
#include<math.h>
int main ()
{
	int n,x;
	printf ("nhap so luong phan tu: ");
	scanf ("%d",&n);
	int a[n];
	for (int i=0;i<n;i++)
	{
		printf ("a[%d]=",i);
		scanf ("%d",&a[i]);
	}
	printf ("nhap x: ");
	scanf ("%d",&x);
	int min=x;
	for (int i=0;i<n;i++)
	{
		if (a[i]<x)
		{
			min=a[i];
			break;
		}
	}
	if (min==x)
	{
		printf ("ko co tiem can duoi %d trong mang: ",x);
	}else
		{
			for (int i=0;i<n;i++)
			{
				if (a[i]<x&&a[i]>min)
				{
					min=a[i];
				}
			}
			printf ("Tiem can duoi %d trong mang la %d",x,min);
		}	
}



#include<stdio.h>
int main ()
{
	int n;
	printf ("Nhap ma tran n: ");
	scanf ("%d",&n);
	int a[n][n];
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			printf ("a[%d][%d]: ",i,j);
			scanf ("%d",&a[i][j]);
		}
	}
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			printf ("%3d",a[i][j]);
		}
		printf ("\n");
	}
	int s1=0,s2=0;
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			if (i==j)
			{
				s1=s1+a[i][j];
			}
			if (j==n-i-1)
			{
				s2=s2+a[i][j];
			}
		}
	}
	printf ("Trung binh cong duong cheo chinh la: %.2f\n",(float)s1/n);
	printf ("Trung binh cong duong cheo chinh phu: %.2f",(float)s2/n);

	
}



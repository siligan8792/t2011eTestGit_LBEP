#include<stdio.h>
int main ()
{
	int m,n;
	printf ("Nhap so hang ma tran: ");
	scanf ("%d",&m);
	printf ("Nhap so cot ma tran: ");
	scanf ("%d",&n);
	int a[m][n],b[m][n],s[m][n];
	printf ("Nhap ma tran thu nhat: \n");
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			printf ("a[%d][%d]: ",i,j);
			scanf ("%d",&a[i][j]);
		}
		printf ("\n");
	}

	printf ("Nhap ma tran thu 2: \n");
	for (int i=0;i<m;i++)
	{
		for (int j =0;j<n;j++)
		{
			printf ("b[%d][%d]: ",i,j);
			scanf ("%3d",&b[i][j]);
		}
		printf ("\n");
	}
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			s[i][j]=a[i][j]+b[i][j];
		}
	}
	printf ("Tong 2 ma tran la: \n");
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			printf ("%3d",s[i][j]);
		}
		printf ("\n");
	}
}



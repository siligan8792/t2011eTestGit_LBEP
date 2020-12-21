#include<stdio.h>
bool timkiem (int x, int a[], int n)
	{
	for (int i=0;i<n;i++)
		{
			if (x==a[i])
			return true;
		}
		return false;
	}
void insole (int a[], int n)
	{
		for (int i=0;i<n;i++)
		{
			if (a[i]%2!=0)
			{
				printf ("%3d",a[i]);
			}
		}
	}
int timUcln (int a,int b)
	{
		int ucln=1;
		for (int i=1;i<a;i++)
		{
			if (a%i==0&&b%i==0)
			{
				ucln=i;
			}
			if (i>a||i>b)
				return ucln;		
		}
		return ucln;
	}
int timBcnn (int a,int b)
	{
		for (int i=a;true;i++)
		{
			if (i%a==0&&i%b==0)
			{
				return i;
			}

		}
	}	

int main ()
{
	int a,b;
	printf ("Nhap a: ");
	scanf ("%d",&a);
	printf ("Nhap b: ");
	scanf ("%d",&b);
	printf ("%d",timUcln);
	printf ("%d",timBcnn);
	
}



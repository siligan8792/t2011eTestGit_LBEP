#include<stdio.h>
#include<math.h>
int main ()
{
	int n;
	bool ok;
	printf ("nhap n phan tu trong mang: ");
	scanf ("%d",&n);
	int a[n];
	for (int i=0;i<n;i++)
	{
		int x;
		do
		{	
			ok=true;		
			printf ("nhap arr[%d]= ",i);
			scanf ("%d",&x);
			for (int j=0;j<i;j++)
			{
				if (x==a[j])
				{
					ok=false;
					printf ("%d da co trong mang, moi nhap lai \n",x);
				}
			}
		}
		while (ok==false);
		a[i]=x;		
	}
		printf ("mang sau khi nhap \n");
		for (int i=0;i<n;i++)
		{
			printf ("%3d",a[i]);
		}	
}




#include<iostream>
#include<math.h>
int main ()
{

int a,b,c;
	printf ("nhap canh thu nhat = ");
	scanf ("%d",&a);
	printf ("nhap canh thu hai = ");
	scanf ("%d",&b);
	printf ("nhap canh thu ba = ");
	scanf ("%d",&c);
	
	if (a>0&&b>0&&c>0&&a+b>c&&a+c>b&&b+c>a)
	{
		float p = a+b+c;
		float p1 = (float)(a+b+c)/2;
		float s = sqrt(p1*(p1-a)*(p1-b)*(p1-c));
		printf ("Dien tich tam giac la: %.2f",s);							
	}
	else
	{
		printf ("Khong phai la canh cua tam giac");
	}
}


#include<stdio.h>
#include<math.h>
int main ()
{
	float a,b;
	printf ("nhap a= ");
	scanf ("%f",&a);
	printf ("nhap b= ");
	scanf ("%f",&b);
	
	
	if (a>=b){
		printf ("%f",a/b);
	}else{
		printf ("%f",a*b);
	}
}



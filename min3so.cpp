#include<stdio.h>
#include<math.h>
int main ()
{
	int a,b,c;
	printf ("nhap a= ");
	scanf ("%d",&a);
	printf ("nhap b= ");
	scanf ("%d",&b);
	printf ("nhap c= ");
	scanf ("%d",&c);
	
	if (a>b){
		if (b>c){
			printf ("Min: %d",c);
		}else {
			printf ("Min: %d",b);
		}		
	}
	else{
		if (a>c){
			printf ("Min: %d",c);
		}else {
			printf("Min: %d",a);
			
		}
	}
}





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
	
	if (a>0){
		if (b>0){
			if (c>0){
				if (a+c>b){
					if(a+b>c){
						if(b+c>a){
							printf ("day la 3 canh cua tam giac");
							int p = a+b+c;
							float q = (float)p/2;
							float s = sqrt(q*(q-a)*(q-b)*(q-c));
							printf ("Chu vi: %d va dien tich: %f",p,s);							
						}else{
							printf ("Khong phai la canh cua tam giac");
						}
					}else{
						printf ("Khong phai la canh cua tam giac");
						}
				}else {
					printf ("Khong phai la canh cua tam giac");
					}
			}else{
				printf ("Khong phai la canh cua tam giac");
				}
		}else{
			printf ("Khong phai la canh cua tam giac");
			}
	}else{
		printf ("Khong phai la canh cua tam giac");
		}
}



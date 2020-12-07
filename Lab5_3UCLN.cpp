#include<stdio.h>
#include<math.h>
int main ()
{
	int a,b,ucln;
    printf ("nhap a: ",a);
    scanf ("%d",&a);
    printf ("nhap b: ",b);
    scanf ("%d",&b);
    
    for(int i=b;;i--)
	{
        if(a%i==0&&b%i==0&&a!=0&&b!=0)
		{
            ucln=i;
            break;
        }
        
    }
    printf("UCLN(%d, %d) = %d", a, b, ucln);
}


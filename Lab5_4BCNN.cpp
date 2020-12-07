#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,bcnn;
    printf ("nhap a: ",a);
    scanf ("%d",&a);
    printf ("nhap b: ",b);
    scanf ("%d",&b);
    
    for(int i=1;i<=(a*b);i++)
	{
        if(i%a==0&&i%b==0&&a!=0&&b!=0)
		{
            bcnn=i;
            break;
        }
        
    }
    printf("BCNN(%d, %d) = %d", a, b, bcnn);
}



#include<stdio.h>
#include<math.h>
int main ()
{
	int von = 4000;
	int nam = 4;
	float tongtien;
	
	for (int i =1;i<=nam; i++)
	{
		tongtien+=((von+tongtien)*8/100);
	}
	printf ("so tien gui sau 4 nam la %.2f",von+tongtien);
}



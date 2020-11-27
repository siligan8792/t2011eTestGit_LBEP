#include<stdio.h>
#include<math.h>
int main ()
{
	int t1=31,t3=31,t5=31,t7=31,t8=31,t10=31,t12=31;
	int t2=28;
	int t4=30,t6=30,t9=30,t11=30;
	int d,m;
	
	printf ("xin moi nhap thang: ");
	scanf ("%d",&m);
	printf ("xin moi nhap ngay: ");
	scanf ("%d",&d);
	
	if(m>=1&&m<=12){
		if (m==1){
			if (d<=31&&d>=1){
				printf ("la ngay thu %d trong nam\n",m-1+d);
				if (((m-1+d)%7+1)==1){
					printf ("va hom nay la chu nhat");
				}else{
					printf ("\nva dang la thu %d ",(m-1+d)%7+1);
				}
			}else{
				printf ("nhap ngay sai ");
			}
		
		}
		if (m==2){
			if (d<=28&&d>=1){
				printf ("la ngay thu %d trong nam",t1+d);
				if (((t1+d)%7+1)==1){
					printf ("\nva hom nay la chu nhat");
				}else{
					printf ("\nva dang la thu %d",(t1+d)%7+1);
				}
			}else{
				printf ("nhap ngay sai ");
			}
		
		}
		if (m==3){
			if (d<=31&&d>=1){
				printf ("la ngay thu %d trong nam",t1+t2+d);
				if (((t1+t2+d)%7+1)==1){
					printf ("\nva hom nay la chu nhat");
				}else{
				
				printf ("\nva dang la thu %d",(t1+t2+d)%7+1);
				}
			}else{
				printf ("nhap ngay sai ");
			}
		
		}
		if (m==4){
			if (d<=30&&d>=1){
				printf ("la ngay thu %d trong nam",t1+t2+t3+d);
				if(((t1+t2+t3+d)%7+1)==1){
					printf ("\nva hom nay la chu nhat");
				}else{			
				printf ("\nva dang la thu %d",(t1+t2+t3+d)%7+1);
				}
			}else{
				printf ("nhap ngay sai ");
			}
		
		}
		if (m==5){
			if (d<=31&&d>=1){
				printf ("la ngay thu %d trong nam",t1+t2+t3+t4+d);
				if(((t1+t2+t3+t4+d)%7+1)==1){
					printf ("\nva hom nay la chu nhat");
				}else{
				printf ("\nva dang la thu %d",(t1+t2+t3+t4+d)%7+1);
				}
			}else{
				printf ("nhap ngay sai ");
			}
		
		}
		
		if (m==6){
			if (d<=30&&d>=1){
				printf ("la ngay thu %d trong nam",t1+t2+t3+t4+t5+d);
				if(((t1+t2+t3+t4+t5+d)%7+1)==1){
					printf ("\nva hom nay la chu nhat");
				}else{
				printf ("\nva dang la thu %d",(t1+t2+t3+t4+t5+d)%7+1);
				}
			}else{
				printf ("nhap ngay sai ");
			}
		
		}
		
		if (m==7){
			if (d<=31&&d>=1){
				printf ("la ngay thu %d trong nam",t1+t2+t3+t4+t5+t6+d);
				if (((t1+t2+t3+t4+t5+t6+d)%7+1)==1){
					printf ("\nva hom nay la chu nhat");
				}else{
				printf ("\nva dang la thu %d",(t1+t2+t3+t4+t5+t6+d)%7+1);
				}			
			}else{
				printf ("nhap ngay sai ");
			}
		
		}
		if (m==8){
			if (d<=31&&d>=1){
				printf ("la ngay thu %d trong nam",t1+t2+t3+t4+t5+t6+t7+d);
				if(((t1+t2+t3+t4+t5+t6+t7)%7+1)==1){
					printf ("\nva hom nay la chu nhat");
				}else{			
				printf ("\n va dang la thu %d",(t1+t2+t3+t4+t5+t6+t7+d)%7+1);
				}
			}else{
				printf ("nhap ngay sai ");
			}
		
		}
		if (m==9){
			if (d<=30&&d>=1){
				printf ("la ngay thu %d trong nam",t1+t2+t3+t4+t5+t6+t7+t8+d);
				if(((t1+t2+t3+t4+t5+t6+t7+t8+d)%7+1)==1){
					printf ("\nva hom nay la chu nhat");
				}else{
				printf ("\nva dang la thu %d",(t1+t2+t3+t4+t5+t6+t7+t8+d)%7+1);
				}
			}else{
				printf ("nhap ngay sai ");
			}
		
		}
		if (m==10){
			if (d<=31&&d>=1){
				printf ("la ngay thu %d trong nam",t1+t2+t3+t4+t5+t6+t7+t8+t9+d);
				if(((t1+t2+t3+t4+t5+t6+t7+t8+t9+d)%7+1)==1){
					printf ("\nva hom nay la chu nhat");
				}else{
				printf ("\n va dang la thu %d",(t1+t2+t3+t4+t5+t6+t7+t8+t9+d)%7+1);
				}
			}else{
				printf ("nhap ngay sai ");
			}
		
		}
		if (m==11){
			if (d<=30&&d>=1){
				printf ("la ngay thu %d trong nam",t1+t2+t3+t4+t5+t6+t7+t8+t9+t10+d);
				if(((t1+t2+t3+t4+t5+t6+t7+t8+t9+t10+d)%7+1)==1){
					printf ("\nva hom nay la chu nhat");
				}else{
				printf ("\n va dang la thu %d",(t1+t2+t3+t4+t5+t6+t7+t8+t9+10+d)%7+1);
				}
			}else{
				printf ("nhap ngay sai ");
			}
		
		}
		if (m==12){
			if (d<=31&&d>=1){
				printf ("la ngay thu %d trong nam",t1+t2+t3+t4+t5+t6+t7+t8+t9+t10+t11+d);
				if(((t1+t2+t3+t4+t5+t6+t7+t8+t9+t10+t11+d)%7+1)==1){
					printf ("\nva hom nay la chu nhat");
				}else{
				printf ("\n va dang la thu %d",(t1+t2+t3+t4+t5+t6+t7+t8+t9+10+t11+d)%7+1);
				}
			}else{
				printf ("nhap ngay sai ");
			}
		
		}
	}else{
		printf("nhap thang sai");
	}	
}




    /*EBOB*/ 
#include<stdio.h> 
#include<conio.h> 
   int ebob(int x, int y)
   {if (y==0) return x; else return ebob(y,x%y);  } 
    
 int main () {
 	int a,b; 
 	printf("1.tamsayi:");  scanf("%d",&a); 
 	printf("2.tamsayi:");  scanf("%d",&b); 
 	
 	printf("\n EBOB(%d,%d)=%d\n",a,b,ebob(a,b)); 
 	
 	getch(); 
 	return 0;
 	
 }	   

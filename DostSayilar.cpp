    /*Dost sayilar*/ 
#include<stdio.h> 
#include<conio.h> 
  int main() { 
  
   int i,a,b,ta=0,tb=0; 
   printf("1.tamsayi:"); scanf("%u",&a); 
   printf("2.tamsayi:"); scanf("%u",&b); 
    
    for(i=1; i<a; i++)  if(a%i==0)  ta+=i; 
	for(i=1; i<b; i++)  if(b%i==0)  tb+=i; 
	
	if((ta==b) && (tb==a))
    printf("Dost sayilar\n"); 
	else 
	printf("Dost sayilar degil.\n"); 
	
	getch(); 
	
	return 0;	
	
	
	
	  }

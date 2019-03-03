  /*Hilbert sayisi bulma*/ 
#include<stdio.h> 
#include<conio.h> 


  int main() {
  
  	int s; 
  	printf("Pozitif tamsayi:"); 
  	scanf("%u",&s); 
  	if ((s-1)%4==0) 
  	printf("Hilbert sayisidir"); 
  	else 
  	printf("Hilbert sayisi degildir"); 
  	
  	getch(); 
  	return 0;
  	
  	
  }

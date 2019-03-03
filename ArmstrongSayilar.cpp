   /*ARMSTRONG SAYILAR*/ 
#include<stdio.h> 
#include<conio.h> 
  
   int main() {
   	int i,j,k; 
   	printf("Armstrong sayilar:\n"); 
   	printf("------------------\n");
   	 for (i=1; i<=9; i++) 
   	 for(j=0; j<=9; j++)
   	 for(k=0; k<=9; k++)
    
	if((100*i+10*j+k)==(i*i*i+j*j*j+k*k*k)) 
	printf("%u\n",100*i+10*j+k); 
	
	getch(); 
	return 0;   	
   	
   	
   	
   }

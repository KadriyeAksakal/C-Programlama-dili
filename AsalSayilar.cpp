   /*ASAL SAYILAR*/ 
#include<stdio.h> 
#include<conio.h> 
  int main() {
  	int i,j,N,s; 
  	printf("Belirtilen araliklardaki ASAL sayilar\n"); 
  	printf("\n ust sinir =>"); scanf("%d",&N); 
  	printf("\n+++  ASAL SAYILAR  +++\n\n");
  	 for(i=2; i<=N; i++) {
  	 	s=0; 
  	 	for(j=1; j<=i; j++)   
		if(i%j==0) s++; 
  	 	if(s==2) 
		  printf("%d\t",i); 
	   }
  	
  	getch(); 
  	
	  return 0;
  	
  	
  	
  	
  }

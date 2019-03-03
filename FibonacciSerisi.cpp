   /*Fibonacci serisi elemanlari*/ 
#include<stdio.h> 
#include<conio.h> 
  int main() {
  	int N,i,T1,T2,T3; 
  	printf("Fibonacci serisi\n"); 
  	printf("Terim sayisi:"); scanf("%d",&N); 
  	T1=1; T2=1; 
  	printf("\n%d\t%d\t",T1,T2); 
  	 
  	 for(i=1; i<=N-2; i++) 
  	 {T3=T1+T2; printf("%d\t",T3); T1=T2; T2=T3;}  
  	 
  	 getch(); 
  	 
  	 return 0; 
  }   

   /*Iki dizinin toplami*/
#include<stdio.h> 
#include<conio.h> 
  int i,N,A[100],B[100],C[100]; 
int main() {
	printf("Dizinin eleman sayisi:");   scanf("%u",&N);  printf("\n"); 
	  for(i=0; i<N; i++) { printf("A(%u)= ",i);   scanf("%d",&A[i]); }   printf("\n"); 
	  for(i=0; i<N; i++) { printf("B(%u)= ",i);   scanf("%d",&B[i]); }   printf("\n"); 
	  for(i=0; i<N; i++) { C[i]=A[i]+B[i];   printf("C(%u)= %d\n",i,C[i]);  }
	
	getch(); 
	return 0;
	
	
}

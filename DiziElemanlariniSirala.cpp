   /* Dizi elemanlarini siralama*/ 
#include<stdio.h> 
#include<conio.h> 
  int main() {
  	int i,j,N,g,A[100];
printf("Dizinin eleman sayisini giriniz: ");  
scanf("%u",&N); printf("\n"); 
 for (i=0; i<N; i++) { printf("A(%u)= ");  scanf("%d",&A[i]); }
  	for(i=0; i<N-1; i++) 
	  { for(j=i+1; j<N; j++) 
	   {if(A[j]<A[i])  { g=A[i]; A[i]=A[j]; A[j]=g; }}}
printf("\nSirali dizi:\n");
printf("============\n"); 
for (i=0; i<N; i++)  
printf("A(%u)=%d\n",i,A[i]); 


getch ();   	
  	return 0;
  	
  	
  	
  }

   /*Dizinin en buyuk en kucuk elemanlari*/ 
#include<stdio.h> 
#include<conio.h> 
  int i,N,enk,enkyer,enb,enbyer,A[100]; 
 int main() {
 
 	printf("Dizinin eleman sayisi: "); 
 	scanf("%d",&N); printf("\n"); 
 	for(i=0; i<N; i++) 
 	{ printf("A(%u)= ",i);  scanf("%d",&A[i]); }   printf("\n");
 	
 	enk=A[0]; enkyer=0;  enb=A[0];  enbyer=0; 
 	for(i=1; i<N; i++) 
 	{ if(A[i]<enk)  { enk=A[i]; enkyer=i;}            
	  if(A[i>enb])  { enb=A[i]; enbyer=i;} 
	}
 	
 	printf("Dizinin en kucuk elemani %d dir ve %i. siradadir.\n",enk,enkyer+1); 
 	printf("Dizinin en buyuk elemani %d dir ve %i. siradadir.\n",enb,enbyer+1); 
 	
 	getch (); 
 	return 0;
 	
 } 

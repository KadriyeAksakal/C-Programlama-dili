    /*Mukemmel sayi*/
#include<stdio.h> 
#include<conio.h> 
  int main() {
  	int i,sayi,topla=0; 
  	printf("Bir sayi giriniz:"); 
  	scanf("%d",&sayi); 
  	for(i=1; i<sayi; i++) 
  	 if (sayi%i==0)  topla=i+topla; 
  	 
  	 if(topla==sayi) 
  	 printf("Mukemmel sayi"); 
  	 else 
  	 printf("Mukemmel sayi degil"); 
  	 
  	 getch(); 
  	 return 0;
  	 
  }

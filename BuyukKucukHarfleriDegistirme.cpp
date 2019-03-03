   
#include<stdio.h> 
#include<conio.h>
#include<string.h>
  int main() {
  	char k[25]; 
  	int i; 
printf("Kelime: "); gets(k); 
 for (i=0; i<strlen(k); i++) 
   if((k[i>=65]) && (k[i]<=90)) 
printf("%c",k[i]+32); 
   else printf("%c",k[i]-32); 
   
   getch(); 
   return 0; 
  	
  }

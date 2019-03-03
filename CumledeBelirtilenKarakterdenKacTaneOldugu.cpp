      /*cümle-harf*/ 
#include<stdio.h> 
#include<conio.h> 
#include<string.h>
int main() {
  char a[200],b; 
  int  c[100],i,s=0; 
printf("Cumleyi giriniz=> "); gets(a);  
printf("Harf giriniz=> ");  scanf("%s",&b);   printf("\n"); 
  for(i=0; i<strlen(a); i++) 
  {if(a[i]==b) {s++; c[s-1]=i+1;}}
printf("Belirtilen harften %u tane vardir\nYerleri\n",s); 
for(i=0; i<s; i++) 
printf("%u\t",c[i]); 
  getch(); 
  return 0;
      	
	}

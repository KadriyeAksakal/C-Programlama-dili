   /*CULLEN sayilari*/

#include<stdio.h> 
#include<conio.h> 
#include<math.h> 
  int main() { 
  int i,n; 
  printf("CULLEN SAYILARI\n"); 
  printf("Terim sayisi:"); 
  scanf("%d",&n); 
  
  for(i=1; i<=n; i++) 
  printf("%0.0f\n",i*pow(2,i)+1); 
  
  getch(); 
  return 0;
  
  
  
  
  
  }

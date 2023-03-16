#include<stdio.h> 
 
 int main()    
{    

int a, b;   

  printf("Enter the First Number: ");
  scanf("%d", &a);
  
  printf("Enter the Second Number: ");
  scanf("%d", &b);
   
printf("Before Swaping a=%d b=%d",a,b);   
   
a=a+b;    
b=a-b;   
a=a-b;

printf("\nAfter Swaping a=%d b=%d",a,b);    
return 0;  
}   

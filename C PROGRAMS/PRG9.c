#include<stdio.h> 
 
 int main()    
{    

int a, b, c;      
printf("Enter the First Number: ");
  scanf("%d", &a);
  
  printf("Enter the Second Number: ");
  scanf("%d", &b);
  
  printf("Enter the Third Number: ");
  scanf("%d", &c);
  
printf("Before Swaping a=%d b=%d c=%d",a,b,c);   
   

   a = a + b + c;
   b = a - (b + c);
   c = a - (b + c);
   a = a - (b + c);
   
printf("\nAfter Swaping a=%d b=%d c=%d",a,b,c);    
return 0;  
}   

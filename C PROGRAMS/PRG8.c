#include<stdio.h>

int main() 
{
  double a, b, c, temp;
  
  printf("Enter the First Number: ");
  scanf("%lf", &a);
  
  printf("Enter the Second Number: ");
  scanf("%lf", &b);
  
  printf("Enter the Third Number: ");
  scanf("%lf", &c);
  
temp = b;
   b = a;
   a = c;
   c = temp;

  printf("\nAfter Swapping, a = %.2lf\n", a);
  printf("After Swapping, b = %.2lf\n", b);
   printf("After Swapping, c = %.2lf", c);
  return 0;
}

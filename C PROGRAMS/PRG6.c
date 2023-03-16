#include<stdio.h>

int main() 
{
  double a, b, temp;
  
  printf("Enter the First Number: ");
  scanf("%lf", &a);
  
  printf("Enter the Second Number: ");
  scanf("%lf", &b);

  temp = a;

  a = b;

  b = temp;


  printf("\nAfter Swapping, a = %.2lf\n", a);
  printf("After Swapping, b = %.2lf", b);
  return 0;
}

#include <stdio.h>

int main()
{
    float centigrade, fahrenheit;

   
    printf("Enter the Temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

   
    centigrade = (fahrenheit - 32) * 5 / 9;

  
    printf("%.2f Fahrenheit = %.2f centigrade", fahrenheit, centigrade);

    return 0;
}

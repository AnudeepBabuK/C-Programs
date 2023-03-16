#include <stdio.h>

int main()
{
    int a,b,rem;
    
    printf("Enter the First Number :");
    scanf("%d",&a);
    
    printf("Enter the Second Number :");
    scanf("%d",&b);
 
    rem=a-(a/b)*b;
 
    printf("The Remainder is = %d\n",rem);
    return 0;
}

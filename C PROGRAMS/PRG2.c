#include<stdio.h>

int main()
{
	int x = 0; 
	int y = 0;  
	int average = 0; 
	printf("Insert two numbers \n");
	scanf("%d %d",&x,&y);
	
	printf("updated value of x =%d y =%d \n",x,y);
	
	average= (float)(x+y)/2;
	
	printf("total average is 2 elements is average = %d\n",average );
	return 0;
}


//учебная программа
#include <stdio.h>
#include "std.h"

int main()
{
	int a,b;
	
	printf("Input two numbers ");
    scanf("%d%d",&a,&b);
	printf("%d + %d = %d \n",a,b,a+b);
	printf("%d - %d = %d \n",a,b,a-b);
	
	printf("%d * %d = %d \n",a,b,a*b);
	printf("%d / %d = %d \n",a,b,a/b);
	return 0;
}
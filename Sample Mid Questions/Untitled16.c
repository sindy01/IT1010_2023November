#include <stdio.h>

int main()
{
	int a = 3, b;
	b = a--;
	b = a + b;
	
	printf("The value of a is %d and b is %d",a ,b);
}

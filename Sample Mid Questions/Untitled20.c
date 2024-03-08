#include <stdio.h>

int main()
{
	int a = 5, b = 9;
	a > b ? a++ : (b=a++);
	printf("The value of a is %d and b is %d ", a, b);
	
}

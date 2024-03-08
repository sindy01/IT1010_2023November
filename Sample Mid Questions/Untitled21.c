#include <stdio.h>
int main(void)
{
	int a, b, m, n;
	a = -4;
	b = 7;
	m = 12;
	n = -5;
	
	a = b + m - n;
	m = a * a;
	
	printf("The value of a is %d , b is %d , m is %d and n is %d", a, b, m, n);
	   
	return 0;
}

#include <stdio.h>

int main()
{
	float bonus = 0.0;
	float salary = 96800.00;
	char category = 'P';
	if (category == 'T')
	   bonus = salary * 0.15;
	salary = salary + bonus + salary * 0.1;
	printf("%.2f\n", salary);

}

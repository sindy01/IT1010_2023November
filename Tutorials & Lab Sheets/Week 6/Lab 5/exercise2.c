//Lab 5 Exercise 2

/*This is a sample C program to input integer numbers
from the keyboard and display until user inputs -1*/

#include <stdio.h>

int main(void)
{
	int number;
	
	printf("Enter number : ");
	scanf("%d", &number);
	
	while(number != -1)
	{
		printf("%d\n", number);
		
		printf("Enter number : ");
		scanf("%d", &number);
	}
	
	return 0;
}

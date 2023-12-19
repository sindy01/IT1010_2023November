//Lecture 2 Example 3 - Slide No. 18
//Input two number from the keyboard and add two numbers

#include <stdio.h>

int main(void)
{	
	int no1, no2;	
	int sum;		
	printf("Enter first number:");   /* prompt */
	scanf("%d", &no1);  /* read the value */	
	printf("Enter second number:");    /* prompt*/	
	scanf("%d", &no2);  /* read the value */	
	sum =  no1  + no2;    /* assign total to sum */	
	printf("Sum is %d\n",  sum);    /* print sum */	
	return 0; 
} // end of main function


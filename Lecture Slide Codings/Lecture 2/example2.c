//Lecture 2 Example 2 - Slide No. 15
//Adding two numbers and display output

#include <stdio.h>

int main(void)
{	
	int no1, no2;	
	int sum;		
	no1 = 25;   //  assign value to no1 variable 	
	no2 = 12;   //  assign value to no2 variable 	
	sum = no1 + no2;  // add numbers 	
	printf( "Sum is %d\n",  sum);    // print sum 	
	printf("Sum of %d and %d is %d",no1,no2,sum);
	return 0; 
} // end of main function

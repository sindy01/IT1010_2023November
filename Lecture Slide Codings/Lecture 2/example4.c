//Lecture 2 Example 4 - Slide No. 18 (Alternative)
//Input two number from the keyboard and add two numbers

#include <stdio.h>

int main(void)
{	
	int no1, no2;	
	int sum;		
	printf("Enter 1st number and 2nd number (separated by a space): ");   /* prompt */
	scanf("%d %d", &no1, &no2);  		
	sum =  no1  + no2;    
	printf("Sum is %d\n",  sum);    	
	return 0; 
} // end of main function


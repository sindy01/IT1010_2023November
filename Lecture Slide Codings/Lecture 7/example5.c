//Lecture 7 Example 5 - Slide 11
//Summing the Elements of an Array

#include <stdio.h>
#define SIZE 12

int main(void)
{
	int a[SIZE];
	int i,j;
	int total = 0; //sum of array
	
	for( i = 0; i < SIZE; ++i)
	{
		printf("\n a[%d] = ",i);
		scanf("%d", &a[i]);  	//get user input 		
    }
    
	for( j = 0; j < SIZE; ++j)
     	total += a[j];		//total = total + a[j];
     		
	printf("Total of array elements is %d \n", total); 
    
	return 0;
}

/*
In C programming, when you use #define with a constant value, you create a 
preprocessor macro. In your case, you've defined a macro named SIZE with 
the value 12. This means that anywhere in your code where you use the 
identifier SIZE, it will be replaced with the value 12 during the 
preprocessing stage, before the actual compilation of your program.
*/



//Lecture 7 Example 4 - Slide 10
//Specifying an array’s size with a symbolic constant

#include <stdio.h>
#define SIZE 10

int main(void)
{
	int a[SIZE];
	int j;	//counter
	
	for( j = 0; j < SIZE; ++j)
     	a[j] = 2 + 2 * j;
    
	/*a[0]=2,a[1]=4,a[2]=6,a[3]=8,a[4]=10,
	a[5]=12,a[6]=14,a[7]=16,a[8]=18,a[9]=20*/

	printf("%s%13s\n",  "Element",  "Value");

	for( j = 0; j < SIZE; ++j)
     	printf("%7d%13d\n", j , a[j]); 
    
	return 0;
}

/*
In C programming, when you use #define with a constant value, you create a 
preprocessor macro. In your case, you've defined a macro named SIZE with 
the value 10. This means that anywhere in your code where you use the 
identifier SIZE, it will be replaced with the value 10 during the 
preprocessing stage, before the actual compilation of your program.
*/


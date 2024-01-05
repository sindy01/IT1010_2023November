// Lecture 4 Example 8 - Slide 12
// Numnerical representation of characters

#include <stdio.h>

int main(void)
{
	printf( "The character (%c) has the value %d.\n", 'a', 'a' );
	/* 
	OUTPUT - The character (a) has the value 97
	Many computers today use ASCII(American Standard Code for Information Interchange) character set
	Conversion specifier %c and %d can be used to print character ‘a’ and its integer value
	97 is the numerical representation of character ‘a’ in the computer
	*/
	
	printf( "The character (%c) has the value %d.\n", 'S', 'S' );
	
	printf( "The character (%c) has the value %d.\n", '@', '@' );
	
	printf( "The character (%c) has the value %d.\n", '1', '1' );
	
	return 0;
}     


// Lecture 4 Example 2 - Slide 4
// using if statement

#include <stdio.h>

int main(void)
{

	int no1, no2;
	printf( "%s", "Enter two integers : " ); 
	scanf( "%d%d", &no1, &no2);       // read two integers
	
	if ( no1 == no2 )    // checking equal  
	{
		printf( "%d is equal to %d\n" , no1, no2 );
	    printf( "%s", "Numbers are same" );
	}
	         
	
	if ( no1 != no2 ) // checking not equal  
	{
		printf( "%d is not equal to %d\n" , no1, no2 );
	    printf( "%s", "Numbers are not same" );
	}
	         
	
	return 0;
 } // end of main function


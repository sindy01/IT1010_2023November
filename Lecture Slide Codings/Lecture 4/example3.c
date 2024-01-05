// Lecture 4 Example 3 - Slide 6
// printing pass or fail using if .. else  statement 

#include <stdio.h>

int main(void)
{
	int mark;
		
	printf( "Enter marks : " ); 
	scanf( "%d", &mark );       // read marks

	if ( mark >= 60 )    // check whether mark greater than or equal to  60
	{
	    printf( "%s", "Passed" );
	}
	else
	{
	    printf( "%s", "Failed \n" );
	    printf( "You must take this again \n" );
	}

    return 0;
}


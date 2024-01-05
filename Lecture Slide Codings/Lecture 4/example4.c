// Lecture 4 Example 4 - Slide 7
// printing pass or fail using CONDITIONAL OPERATOR

#include <stdio.h>

int main(void)
{
	int mark;
		
	printf( "Enter marks : " ); 
	scanf( "%d", &mark );       // read marks

	mark >= 60 ? printf( "Passed\n" ) : printf( "Failed\n" );
	
	/*
	EQUIVALENT TO THE CODE
	if ( mark >= 60 ) 
    	printf( "Passed" );	     
	else
    	printf( "Failed" );
	*/

    return 0;
}


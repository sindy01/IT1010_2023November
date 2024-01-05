// Lecture 4 Example 5 - Slide 8
// printing grade using nested if .. else  statement

#include <stdio.h>

int main(void)
{
	int mark;
		
	printf("%s", "Enter marks : "); 
	scanf("%d", &mark);       // read marks

	if ( mark >= 80 )
	    printf( "%s", "Grade A " );
	else if ( mark >= 50 )
	    printf( "%s", "Grade B " );
	else if ( mark >= 40 )
	    printf( "%s", "Grade C " );
	else
	    printf( "%s", "Grade F " );

	return 0;
}
	          


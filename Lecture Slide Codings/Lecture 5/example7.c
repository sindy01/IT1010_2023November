// Lecture 5 Example 7 - Slide 23
//Using  the continue statement in a while statement

# include <stdio.h>

int main(void)
{
	int x =  1; 
	while ( x  <=  10)  
	{ 
		if ( x == 5) 
		{
		    ++x;
		    continue; 
		}
		printf("%d ",  x); 
		++ x; 
	} // end while
} //end function main


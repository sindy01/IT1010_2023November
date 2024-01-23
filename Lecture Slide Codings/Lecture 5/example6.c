// Lecture 5 Example 6 - Slide 21
//Using a break statement in a while statement

# include <stdio.h>

int main(void)
{
	int x =  1; 
	while ( x  <=  10)  
	{ 
		if ( x == 5) 
		{
		    break; 
		}
		printf("%d ",  x); 
		++ x; 
	} // end while
} //end function main


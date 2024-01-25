//Lecture 6 Example 3 - Slide 8
//Using Programmer-defined functions 


# include <stdio.h>

int square ( int y ) ;

int main ( void )
{
	int x;
	
	for (x =1; x <= 10; ++x)
	{
		printf("%d ", square( x ));	
	}
	
	return 0;	
}

int square (int y)
{
	return y * y;
} 


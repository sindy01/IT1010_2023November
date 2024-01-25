//Lecture 6 Example 4 - Slide 18
//Functions - Passing Arguments By Value 

# include <stdio.h>
int cubeByValue ( int n ) ;

int main ( void )
{
	int  number = 5;

	number  = cubeByValue (number);
	
	printf("Cube of 5 is : %d",number);
	
	return 0;

}

int cubeByValue (int n)
{
	return n * n * n;
}


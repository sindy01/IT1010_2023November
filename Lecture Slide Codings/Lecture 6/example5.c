//Lecture 6 Example 5 - Slide 24
//Block Scope 

# include <stdio.h>

int main ( void )
{  //start of outer block
	int a = 39;
	int b = 6;
	printf( "a= %d  and b= %d \n", a, b);
	
	{  // start of inner block
		float a = 26.25;
		int c = 30;
		printf("Now a= %.2f and b= %d  and c= %d \n", a, b, c);
    }  //end inner block
	
	printf( "Finally a= %d  and b = %d \n", a, b);

}  // end of outer block 



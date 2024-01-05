// Lecture 4 Example 6 - Slide 10
// Using Switch Statement

#include <stdio.h>

int main(void)
{
	int score;
		
	printf( "%s", "Enter score  : " ); 
	scanf( "%d", &score );       // read score 

	switch ( score )
	{
	      case 3 : printf( "Congratulations\n" );
	               printf( "Gold Winner\n" );
                	break;
	      case 2 : printf( "Silver Winner\n" );
                    break;
	      case 1 : printf( "Bronze Winner\n" );
                    break;
	      default : printf( "Invalid Score\n" );
	}
	
	return 0;
	
}  // end of main function        


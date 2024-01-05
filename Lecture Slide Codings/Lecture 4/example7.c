// Lecture 4 Example 7 - Slide 11
// Reading a character and print messages appropriately

#include <stdio.h>

int main(void)
{
	int grade; 
	// char grade; - You can use this instead of int grade;
		
	printf( "%s", "Enter grade  : " ); 
	grade = getchar();     // read a character 
	
	// scanf("%c",&grade) - You can use this instead of grade = getchar(); statement

	switch( grade )
	{
	    case 'A' :  printf( "%s", "Excellent" );
		    		break;
	    case 'B' :  printf( "%s", "Good" );
		        	break;
		case 'C' :  printf( "%s", "Pass" );
		        	break;
		case 'F' :  printf( "%s", "Fail" );
		        	break;
	}
	
	return 0;
}      // end of main function    


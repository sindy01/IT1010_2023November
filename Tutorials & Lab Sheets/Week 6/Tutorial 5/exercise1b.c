//Tutorial 5 Exercise 1 (ii)

//Practice to write while loops

#include <stdio.h>

int main() 
{
    int number;

	//Get the first number from the user
    printf("Enter a number (enter a negative number to stop):");
    scanf("%d", &number);

    while (number >= 0) // Exit from loop when a negative number is entered
	{ 
    	printf("You entered: %d\n", number);
        
        //Get the next number from the user
    	printf("Enter a number (enter a negative number to stop):");
    	scanf("%d", &number);
    }
    
    printf("Negative number entered. Exiting.\n");
     
    return 0;
}


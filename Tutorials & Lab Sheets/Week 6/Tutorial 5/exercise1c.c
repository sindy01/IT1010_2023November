//Tutorial 5 Exercise 1 (iii)

//Practice to write while loops

#include <stdio.h>

int main() 
{
    int number, sum, counter;
    float average;
    
    sum = 0;
    counter = 0;

	//Get the first number from the user
    printf("Enter a number (enter a negative number to stop):");
    scanf("%d", &number);

    while (number >= 0) // Exit from loop when a negative number is entered
	{ 
    	printf("You entered: %d\n", number);
    	sum = sum + number;
    	counter = counter + 1;
        
        //Get the next number from the user
    	printf("Enter a number (enter a negative number to stop):");
    	scanf("%d", &number);
    }
    
    printf("Negative number entered. Exiting.\n");
    
    average = (float)sum/counter;
    printf("Sum of the entered values is %d \n", sum);
    printf("Average of the entered values is %f \n", average);
     
    return 0;
}


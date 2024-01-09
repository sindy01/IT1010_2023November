//Tutorial 4 Exercise 1

//Practice to write an if statement
/*This program gets an integer from the keyboard and 
convert the number into a positive number, 
if the user input is a negative value*/

#include <stdio.h>

int main() 
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Convert negative number to positive number
    if (number < 0) 
	{
        number = -1 * number;
    } 
    
    printf("The output value is %d\n", number);
    
    return 0;
}


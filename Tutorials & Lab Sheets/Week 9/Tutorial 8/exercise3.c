//Tutorial 8 Exercise 3

//Practice to manipulate data in arrays 
//Mistake : It should be backward direction not forward direction

#include <stdio.h>

int main() 
{
    
    int Motion[5];
    int i;

    // Input values for the array
    printf("Enter integers for the array:\n");
    for (i = 0; i < 5; i++) 
	{
        printf("Element %d: ", i + 1);
        scanf("%d", &Motion[i]);
    }

    // Rotate the values backward by one position
    int firstElement = Motion[0]; // Store the first element temporarily

    for (i = 0; i < 4; i++) 
	{
        Motion[i] = Motion[i+1]; // Shift elements to the left
    }

    Motion[4] = firstElement; // Assign the first element to the last position

    // Display the rotated values
    printf("Rotated array values:\n");
    for (i = 0; i < 5; i++) 
	{
        printf("%d\t", Motion[i]);
    }
    printf("\n");

    return 0;
}


//Lecture 7 Exercise 1 - Slide 12

//Method 2 (Using For Loop)

#include <stdio.h>

int main() 
{
    int counts[10] = {0}; // First element is 0 and implicitly remaining elements are set to 0
    
	int i, number;

    printf("Please enter 10 numbers between 10 and 100:\n");

    // Read and store 10 numbers
    for (i = 0; i < 10;) 
	{
        printf("Enter number %d: ", i + 1);
        scanf("%d", &number);

        // Check if the entered number is within the range [10,100]
        if (number >= 10 && number <= 100) 
		{
            counts[i] = number;
            i = i + 1;
        } 
		else 
		{
            printf("Invalid input. Please enter a number between 10 and 100.\n");
        }
    }

    
    // Find the maximum number from the stored numbers.
    int maxValue = counts[0];

    for (i = 1; i < 10; i++) 
	{
        if (counts[i] > maxValue) 
		{
            maxValue = counts[i];
        }
    }

    printf("The maximum number in the range 10-100 is %d.\n", maxValue);

    return 0;
}


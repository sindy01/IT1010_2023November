//Tutorial 6 Exercise 3

//Practice to write functions and use those functions to solve a problem

#include <stdio.h>

// Function Declarations
int add(int a, int b);
int multiply(int a, int b);
int square(int a);

int main() 
{
    int x = multiply(3, 4);	// Calculate 3*4
    
    int y = multiply(5, 7);	// Calculate 5*7
    
    int z = add(x, y);		// Calculate (3*4 + 5*7)
    
    int result = square(z); // Calculate (3*4 + 5*7)^2
    
    //int result = square(add(multiply(3, 4), multiply(5, 7)));

    printf("Result : %d\n", result);
    

    return 0;
}

// Function to add two integers
int add(int a, int b) 
{
    return a + b;
}

// Function to multiply two integers
int multiply(int a, int b) 
{
    return a * b;
}

// Function to square an integer
int square(int a) 
{
    return a * a;
}


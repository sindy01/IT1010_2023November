//Tutorial 3 Exercise 2

#include <stdio.h>

int main() 
{
    int number, digit1, digit2, digit3, digit4, digit5;
    
    // Ask the user to enter the five-digit number
    printf("Enter a five-digit number: ");
    scanf("%d", &number);
    
    // Separate the digits using division and modulo operations
    digit1 = number / 10000; // Extract the leftmost digit
    digit2 = (number / 1000) % 10;
    digit3 = (number / 100) % 10;
    digit4 = (number / 10) % 10;
    digit5 = number % 10; // Extract the rightmost digit
    
    // Display the separated digits
    printf("Digits separated: %d\t%d\t%d\t%d\t%d\n", digit1, digit2, digit3, digit4, digit5);
    
    return 0;
}


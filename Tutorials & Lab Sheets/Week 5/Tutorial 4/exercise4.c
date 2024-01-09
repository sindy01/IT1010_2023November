//Tutorial 4 Exercise 4

//Practice to write a switch statement

#include <stdio.h>

int main() 
{
    float number1, number2, result;
    char operation;

    // Input two numbers and an operator
    printf("Enter first number: ");
    scanf("%f", &number1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operation);  // We put the space before %c to consume any newline character left in the input buffer

    printf("Enter second number: ");
    scanf("%f", &number2);

    // Perform calculations based on the operator using switch statement
    switch (operation) 
	{
        case '+':
            result = number1 + number2;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = number1 - number2;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = number1 * number2;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            result = number1 / number2;
            printf("Result: %.2f\n", result);
            break;
        default:
            printf("You've entered an invalid operator.\n");
            break;
    }

    return 0;
}


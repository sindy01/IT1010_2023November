//Tutorial 2 Exercise 3b

#include <stdio.h>

int main() 
{
    float mark1, mark2, total;

    printf("Enter the first mark: ");
    scanf("%f", &mark1);

    printf("Enter the second mark: ");
    scanf("%f", &mark2);

    // Calculate the total
    total = mark1 + mark2;

    printf("You have entered the following marks:\n");
    printf("Mark 1: %.2f\n", mark1);
    printf("Mark 2: %.2f\n", mark2);

    printf("Total marks: %.2f\n", total);

    return 0;
}


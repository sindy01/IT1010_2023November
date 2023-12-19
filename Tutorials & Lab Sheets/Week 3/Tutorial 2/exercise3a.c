//Tutorial 2 Exercise 3a

#include <stdio.h>

int main() 
{
    float mark1, mark2;

    printf("Enter the first mark: ");
    scanf("%f", &mark1);

    printf("Enter the second mark: ");
    scanf("%f", &mark2);

    printf("You have entered the following marks:\n");
    printf("Mark 1: %.2f\n", mark1);
    printf("Mark 2: %.2f\n", mark2);

    return 0;
}


// Lecture 5 Exercise 1 - Slide 9

#include <stdio.h>

int main() 
{
    int num = 0; // Starting from 0

    while (num <= 20) 
	{
        printf("%d\n", num);
        num += 2; // Increment by 2 to get the next even number
        //num += 2 is same as num = num +2;
    }

    return 0;
}


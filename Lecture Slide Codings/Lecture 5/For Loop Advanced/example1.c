// Omitting the initializer in for loop

#include <stdio.h>

int main() 
{
    int i = 0; // initializer is placed outside the loop

    for ( ; i < 5 ; i++) //initializer is omitted
	{
        printf("%d ", i);
    }

    return 0;
}


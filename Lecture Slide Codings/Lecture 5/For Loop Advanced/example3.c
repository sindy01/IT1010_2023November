// Omitting the increment in for loop

#include <stdio.h>

int main() 
{
	int i;
	
    for (i = 0; i < 5;) // increment is omitted
	{ 
        printf("%d ", i);
        i++;
    }

    return 0;
}


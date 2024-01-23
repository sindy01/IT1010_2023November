// Omitting the condition in for loop

#include <stdio.h>

int main() 
{
	int i; 
	
    for (i = 0; ; i++) // condition is omitted
	{ 
        if (i >= 5) 
		{
            break;
        }
        printf("%d ", i);
    }

    return 0;
}


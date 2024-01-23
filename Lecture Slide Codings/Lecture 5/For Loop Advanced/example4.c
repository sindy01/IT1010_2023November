// Omitting all three parts in for loop

#include <stdio.h>

int main() 
{
    int i = 0;

    for ( ; ; ) // omitting all three parts
	{ 
        if (i >= 5) 
		{
            break;
        }
        printf("%d ", i);
        i++;
    }

    return 0;
}


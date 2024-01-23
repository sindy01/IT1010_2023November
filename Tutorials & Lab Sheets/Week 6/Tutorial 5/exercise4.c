//Tutorial 5 Exercise 4

//Practice to write nested loops

#include <stdio.h>

int main() 
{
    int i,j;
    
    //From row 1 to row 7
    for (i = 1; i <= 7; i++) 	//increment by 1
	{
        for (j = 1; j <= i; j++) 
		{
            printf("*");
        }
        printf("\n");
    }

    //From row 8 to row 11
    for (i = 7; i >= 1; i=i-2) 	//decrement by 2
	{
        for (j = 1; j <= i; j++) 
		{
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


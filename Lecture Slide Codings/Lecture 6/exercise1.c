//Lecture 6 Exercise 1 - Slide 15
//Function that displays a solid square of asterisks

# include <stdio.h>
void printSquarePattern(int side);

int main ( void )
{
    printSquarePattern(5);
    
    return 0;
}

void printSquarePattern(int side) 
{
	int i, j;
    for (i = 0; i < side; i++) 
	{
        for (j = 0; j < side; j++) 
		{
            printf("*");
        }
        printf("\n");
    }
}

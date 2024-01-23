// Lecture 5 Example 8 - Slide 24
//Nested Iteration

# include <stdio.h>

int main(void)
{
	int i, j;
	for ( i = 1; i <= 5 ; ++i)
	{
		for ( j = 1; j <= i; ++j)
		{
			printf("* " );
		}
		printf("\n");
	} 
}


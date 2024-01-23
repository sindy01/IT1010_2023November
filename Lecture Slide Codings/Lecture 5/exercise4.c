// Lecture 5 Exercise 4 - Slide 25

# include <stdio.h>

int main(void)
{
	int i, j;
	for ( i = 1; i <= 5 ; ++i)
	{
		for ( j = 1; j <= i; ++j)
		{
			printf("%d ",j );
		}
		printf("\n");
	} 
}

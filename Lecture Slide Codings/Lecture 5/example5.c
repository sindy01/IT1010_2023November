// Lecture 5 Example 5 - Slide 19
//Counter-controlled repetition with Do.... While Statement

# include <stdio.h>

int main(void)
{
	int counter = 1;

	do
	{
	    printf("%d ", counter);
	} while (++counter <= 10);
	
}


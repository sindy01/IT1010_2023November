//Lecture 6 Example 7 - Slide 30
//Assert - Print numbers greater than 10

# include <stdio.h>
# include <assert.h>

int main(void)
{ 
	int x;
	printf("Please input a number : ");
	scanf("%d", &x);
	
	assert(x >= 10);	//If inputted number is less than 10
						//Then print an error message and terminate the program
	
	printf("The value of x is  %d", x);
	
	return 0;
}
 
//Assert test the value of an expression at execution time.
//If the value is false (0) , assert print an error message and terminate the program.



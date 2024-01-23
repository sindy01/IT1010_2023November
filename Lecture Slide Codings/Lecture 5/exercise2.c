// Lecture 5 Exercise 2 - Slide 12

# include <stdio.h>

int main(void)
{
	int number,  total, counter;
	float average;
	
	total = 0;
	counter = 0;

	//get first input from the user
	printf("Enter grade, 9999 to end :");
	scanf("%d",&number);

	while(number != 9999)
	{ 
		total = total + number;
		counter = counter + 1;
		// get next grade from user
		printf("Enter grade, 9999 to end :");
		scanf("%d",&number);
	} //end while
	
	average = (float)total / counter;
	printf("Class average is %.2f\n", average);
}//end function main


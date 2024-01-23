// Lecture 5 Example 3 - Slide 11
// class average program with sentinel-controlled repetition

# include <stdio.h>

int main(void)
{
	int grade,  total, counter;
	float average;
	
	total = 0;
	counter = 0;

	//get first input from the user
	printf("Enter grade, -1 to end :");
	scanf("%d",&grade);

	while(grade != -1)
	{ 
		total = total + grade;
		counter = counter + 1;
		// get next grade from user
		printf("Enter grade, -1 to end :");
		scanf("%d",&grade);
	} //end while
	
	average = (float)total / counter;
	printf("Class average is %.2f\n", average);
}//end function main


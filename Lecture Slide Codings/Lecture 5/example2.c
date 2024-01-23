// Lecture 5 Example 2 - Slide 7
// class average program with counter-controlled repetition

# include <stdio.h>

//function main begins program execution
int main(void)
{
	int counter,  grade,  total;
	float average;
	total =0;
	counter = 1;
	
	while(counter <= 10) //loop ten times
	{ 
		printf("Enter grade :");
		scanf("%d", &grade); // read grade from user
		total = total + grade;
		counter = counter + 1; // increment counter
	} //end while
	
	average = (float)total / 10;
	printf("Class average is %.2f\n", average);
}//end function main


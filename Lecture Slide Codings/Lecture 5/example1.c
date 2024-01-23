// Lecture 5 Example 1 - Slide 5
//Counter-controlled repetition with While Statement

# include <stdio.h>

int main(void)
{
	int counter =  1; // initialization
	while (counter  <=  10)  //repetition condition
	{ 
		printf("%d ",  counter); // display counter
		++ counter; // increment
	} // end while
} //end function main


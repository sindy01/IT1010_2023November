//Lecture 3 Example 4 - Slide No. 12
//Implicit Conversion / Implicit Casting

#include <stdio.h>

int main()
{
	
	float total = 206;
   	int count= 5;
   	float average;
   	
   	average = total / count; 	//Implicit Conversion
   	
   	printf("The value of average is %.2f",average);

	
	return 0;
}

//Lecture 3 Example 3 - Slide No. 11
//Explicit Conversion / Explicit Casting

#include <stdio.h>

int main()
{
	
	int total = 203;
   	int count= 5;
   	float avg;
   	float average;
   	
   	avg = total / count;
   	average = ( float ) total / count;	//Explicit conversion using cast operator
   	
   	printf("The value without casting is %.2f",avg);
   	printf("\n\n");
   	printf("The value with casting is %.2f",average);
   	printf("\n\n");
   	printf("The value without casting is %f",avg);
   	printf("\n\n");
   	printf("The value with casting is %f",average);

	
	return 0;
}

/*
The rounding error in this context is due to the 
inherent limitations of representing floating-point 
numbers in binary format in computers. Floating-point 
numbers are approximations of real numbers, and not all 
decimal values can be precisely represented in binary.

In your code, when you perform the division total / count, 
the result is not exactly 40.6 due to the way floating-point 
numbers are stored and calculated in binary format. While the 
real result should be 40.6, the representation in the computer's 
floating-point format might introduce a tiny discrepancy, leading 
to a value like 40.599998.

This rounding error is a common phenomenon when working with 
floating-point arithmetic and is generally negligible for most 
practical purposes. It's important to keep in mind that floating-point 
calculations might yield results that are extremely close to the 
expected value but not exact due to the limitations of binary representation.
*/

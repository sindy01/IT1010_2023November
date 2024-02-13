//Tutorial 7 Exercise 2

/*Practice to write assert statements to debug the functions which 
return float or double values.*/

#include <stdio.h>
#include <math.h>
#include <assert.h>

double hypotenuse(double side1, double side2);

int main() 
{
    // Tolerance value to account for potential floating-point errors - use any appropriate value
    double tolerance = 0.00001;	
    
    assert(fabs(hypotenuse(4.56,3.45) - 5.718050) < tolerance);
    /*
	fabs is a Math Function to calculate the absolute 
	value of a floating-point number by effectively removing 
	the sign infront, thus making it a positive value.
	*/ 

    assert(fabs(hypotenuse(3.0, 4.0) - 5.0) < tolerance); 
	
    assert(fabs(hypotenuse(5.0, 12.0) - 13.0) < tolerance);

    assert(fabs(hypotenuse(8.0, 15.0) - 17.0) < tolerance);

    printf("All assertions passed!\n");

    return 0;
}

double hypotenuse(double side1, double side2) 
{
    return sqrt(side1 * side1 + side2 * side2);	//sqrt is a Math Function
}

/*
The hypotenuse function takes two double arguments, 
side1 and side2, and calculates the hypotenuse using 
the Pythagorean theorem (sqrt(side1 * side1 + side2 * side2)).

We define a tolerance value [1e-5 or 0.00001] to account for potential 
floating-point errors when comparing the expected and calculated results.

We use a tolerance value when comparing floating-point numbers 
because exact equality testing with floating-point numbers can 
be problematic due to the way they are represented in memory.

fabs is a Math Function to calculate the absolute 
value of a floating-point number by effectively removing 
the sign infront, thus making it a positive value.
printf("%f",fabs(-4.5)); => 4.500000
*/

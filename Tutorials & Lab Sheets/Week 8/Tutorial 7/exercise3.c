//Tutorial 7 Exercise 3

//Practice to write test functions to debug another function.

#include <stdio.h>
#include <math.h>
#include <assert.h>

void testHypotenuse();
double hypotenuse(double side1, double side2);

int main() 
{
    // Call the testHypotenuse() function to run the tests
    testHypotenuse();

    return 0;
}


void testHypotenuse() 
{
    // Tolerance value to account for potential floating-point errors - use any appropriate value
    double tolerance = 0.00001;	
    
    assert(fabs(hypotenuse(4.56,3.45) - 5.718050) < tolerance);
 
    assert(fabs(hypotenuse(3.0, 4.0) - 5.0) < tolerance); 
	
    assert(fabs(hypotenuse(5.0, 12.0) - 13.0) < tolerance);

    assert(fabs(hypotenuse(8.0, 15.0) - 17.0) < tolerance);

    printf("All assertions passed!\n");
    
}

double hypotenuse(double side1, double side2) 
{
    return sqrt(side1 * side1 + side2 * side2);
}



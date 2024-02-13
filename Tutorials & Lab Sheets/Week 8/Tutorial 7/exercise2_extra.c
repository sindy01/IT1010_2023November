//Tutorial 7 Exercise 2 - Additional Explanation

/*Practice to write assert statements to debug the functions which 
return float or double values.*/

#include <stdio.h>
#include <math.h>
#include <assert.h>

double hypotenuse(double side1, double side2);

int main() 
{
	// NOT ADVISIBLE FOR FUNCTIONS RETURING FLOATING POINT VALUES
    // But, the below three assertions will pass as the values are kind of Integers.
    assert(hypotenuse(3.0, 4.0) == 5.0);  
    assert(hypotenuse(5.0, 12.0) == 13.0);
    assert(hypotenuse(8.0, 15.0) == 17.0);
    
    
    // Side 1 is 4.56, Side 2 is 3.45, Resulting hypotenuse side is 5.718050
	printf("%f\n",hypotenuse(4.56,3.45)); // Prints 5.718050
	
	/* BUT WE CAN'T USE LIKE THIS, AS THE BELOW ASSERTION WILL FAIL, 
	   RESULTING IN THE TERMINATION OF THE PROGRAM, 
	   AS THE CALCULATED HYPOTENUSE IS NOT EQUAL TO THE EXPECTED VALUE.
	   THIS IS DUE TO THE ROUNDING ERRORS THAT OCCURS WHEN FUNCTIONS
	   DO RETURN FLOATING POINT VALUES.
	*/
	assert(hypotenuse(4.56,3.45) == 5.718050);	


    printf("All assertions passed!\n");

    return 0;
}

double hypotenuse(double side1, double side2) 
{
    return sqrt(side1 * side1 + side2 * side2);	//sqrt is a Math Function
}


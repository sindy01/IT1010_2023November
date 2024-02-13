//Tutorial 7 Exercise 1

//Practice to write assert statement to debug functions

#include <stdio.h>
#include <assert.h>

int qualityPoints(float average);

int main() 
{
    // Assert statements for boundary values and middle values of the ranges
    assert(qualityPoints(100) == 4);  // Boundary value (90-100)
    assert(qualityPoints(90) == 4);   // Boundary value (90-100)
    assert(qualityPoints(89) == 3);   // Boundary value (80-89)
    assert(qualityPoints(80) == 3);   // Boundary value (80-89)
    assert(qualityPoints(79) == 2);   // Boundary value (70-79)
    assert(qualityPoints(70) == 2);   // Boundary value (70-79)
    assert(qualityPoints(69) == 1);   // Boundary value (60-69)
    assert(qualityPoints(60) == 1);   // Boundary value (60-69)
    assert(qualityPoints(59) == 0);   // Boundary value (0-59)
    assert(qualityPoints(0) == 0);    // Boundary value (0-59)
    
    assert(qualityPoints(95.1) == 4);   // Middle value (90-100)
    assert(qualityPoints(85.2) == 3);   // Middle value (80-89)
    assert(qualityPoints(75.3) == 2);   // Middle value (70-79)
    assert(qualityPoints(65.7) == 1);   // Middle value (60-69)
    assert(qualityPoints(30.89) == 0);   // Middle value (0-59)

    printf("All assertions passed!\n");

    return 0;
}

int qualityPoints(float average) 
{
    if (average >= 90 && average <= 100) 
        return 4;
	else if (average >= 80) 
        return 3;
	else if (average >= 70) 
        return 2;
	else if (average >= 60) 
        return 1;
	else if (average >= 0 && average < 60)
        return 0;
    else
    	printf("Invalid input.");
}

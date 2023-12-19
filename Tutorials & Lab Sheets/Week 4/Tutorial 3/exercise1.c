//Tutorial 3 Exercise 1

#include <stdio.h>

int main() 
{
    float radius, diameter, circumference, area;

	// Ask the user to enter the radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the diameter
    diameter = 2 * radius;

    // Calculate the circumference
    circumference = 2 * (22/7.0) * radius;

    // Calculate the area
    area = (22/7.0) * radius * radius;

    printf("Diameter: %.2f\n", diameter);
    printf("Circumference: %.2f\n", circumference);
    printf("Area: %.2f\n", area);

    return 0;
}


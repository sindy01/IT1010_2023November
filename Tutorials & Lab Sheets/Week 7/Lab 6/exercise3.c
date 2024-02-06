//Lab 6 Exercise 3

//Calculate the area of a cylinder

#include <stdio.h>

// Function Declarations
float circleArea(float r);
float circlePeri(float r);
float recArea(float width, float length);

int main() 
{
    float radius, height;

    // Input the radius and height of the cylinder from the user
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    // Calculate the area of the circle
    float baseArea = circleArea(radius);

    // Calculate the length of the rectangle / Perimeter of Circle
    float lengthRec = circlePeri(radius);
    
    // Calculate the area of the rectangle
    float rectangleArea = recArea(height,lengthRec);

    // Total area of the cylinder
    float cylinderArea = (2 * baseArea) + rectangleArea;
    
    // float cylinderArea = 2 * circleArea(radius) + recArea(height,circlePeri(radius));

    printf("The total surface area of the cylinder is: %.2f \n", cylinderArea);

    return 0;
}

// Function to calculate the area of a circle
float circleArea(float r) 
{
    return (22/7.0)*r*r;
}

// Function to calculate the perimeter (circumference) of a circle
float circlePeri(float r) 
{
    return 2 * (22/7.0) * r;
}

// Function to calculate the area of a rectangle
float recArea(float width, float length) 
{
    return width * length;
}



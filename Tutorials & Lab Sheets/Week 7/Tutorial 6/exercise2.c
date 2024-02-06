//Tutorial 6 Exercise 2

//Practice to write a simple function

#include <stdio.h>

// Function Declaration
float circleArea(float radius);

int main() 
{
    float radiusCircle, areaCircle;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radiusCircle);

    // Call the circleArea function to calculate the area
    areaCircle = circleArea(radiusCircle);
    
    printf("The area of the circle having radius %.2f is %.2f\n", radiusCircle, areaCircle);
    
    return 0;
}

// Function to calculate the area of a circle
float circleArea(float radius) 
{
    float area;
    area = (22/7.0)*radius*radius;
    return area;
}


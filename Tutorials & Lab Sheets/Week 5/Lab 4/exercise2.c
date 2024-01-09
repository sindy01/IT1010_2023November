//Lab 4 Exercise 1

//Using Nested If Else
//This program calculates the area depending on the shape

#include <stdio.h>

int main() 
{
    char shape;
    float length, width, base, height, radius, area;

    printf("Enter the first character of the shape (R, T, C) : ");
    scanf("%c", &shape);

    if (shape == 'R') 
	{
        printf("Enter length of the rectangle: ");
        scanf("%f", &length);
        printf("Enter width of the rectangle: ");
        scanf("%f", &width);
        area = length * width;
        printf("The area of rectangle = %.2f\n", area);
    } 
	
	else if (shape == 'T') 
	{
        printf("Enter base of the triangle: ");
        scanf("%f", &base);
        printf("Enter height of the triangle: ");
        scanf("%f", &height);
        area = base * height / 2.0;
        printf("The area of the triangle = %.2f\n", area);
    } 
	
	else if (shape == 'C') 
	{
        printf("Enter radius of the circle: ");
        scanf("%f", &radius);
        area = (22/7.0) * radius * radius;
        printf("The area of the circle = %.2f\n", area);
    } 
	
	else 
	{
        printf("You've entered an invalid shape character.\n");
    }

    return 0;
}


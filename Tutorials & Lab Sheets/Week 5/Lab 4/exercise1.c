//Lab 4 Exercise 1

//Using Simple If Else
//This program checks whether a triangle can be formed or not from the user input

#include <stdio.h>

int main() 
{
    int angle1, angle2, angle3;
    
    printf("Enter first angle of the triangle:");
    scanf("%d",&angle1);
    
    printf("Enter second angle of the triangle:");
    scanf("%d",&angle2);
    
    printf("Enter third angle of the triangle:");
    scanf("%d",&angle3);

    // Check if the angles are valid (sum of angles should be 180)
    if (angle1 + angle2 + angle3 == 180) 
	{
        printf("A triangle can be formed with these angles.\n");
    } 
	else 
	{
        printf("A triangle cannot be formed with these angles.\n");
    }

    return 0;
}




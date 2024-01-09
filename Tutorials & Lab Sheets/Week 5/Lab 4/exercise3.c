//Lab 4 Exercise 3

//Using Switch Statement
//This program gets the package type and number of people from the key board and calculate total cost

#include <stdio.h>

int main() 
{
    int type, number;
    float totalCost;

    printf("Adventure Resort Packages:\n");
    printf("1. Horse Ride (Cost: 2000/= per person)\n");
    printf("2. Scuba Diving (Cost: 5000/= per person)\n");
    printf("3. Water Rafting (Cost: 7000/= per person)\n\n");

    printf("Enter the package type (1/2/3): ");
    scanf("%d", &type);
    
    printf("Enter the number of people: ");
    scanf("%d", &number);

    switch (type) 
	{
        case 1:
            totalCost = 2000.0 * number;
            printf("Total cost is %.2f", totalCost);
            break;
        case 2:
            totalCost = 5000.0 * number;
            printf("Total cost is %.2f", totalCost);
            break;
        case 3:
            totalCost = 7000.0 * number;
            printf("Total cost is %.2f", totalCost);
			break;
        default:
            printf("you've entered an invalid package type.\n");
    }
    
    return 0;
}


//Tutorial 9 Exercise 3

//Practice to manipulate 2D arrays

#include <stdio.h>

int main() 
{
   
    // Initialize the sales array to store sales information
    float sales[4][5] = {0};
    int i,j;

    // Input sales information
    for (i = 0; i < 4; i++) 
	{
        for (j = 0; j < 5; j++) 
		{
            float salesAmount;
            printf("Enter sales amount for Salesperson %d, Product %d: ", i+1, j+1);
            scanf("%f", &salesAmount);
            sales[i][j] = salesAmount;
        }
    }

    // Calculate and display total sales for each product
    printf("\nTotal Sales for Each Product:\n");
    
    for (j = 0; j < 5; j++) 
	{
        float totalSales = 0;
        for (i = 0; i < 4; i++) 
		{
            totalSales += sales[i][j];
        }
        printf("Product %d: $%.2f\n", j + 1, totalSales);
    }

    return 0;
}


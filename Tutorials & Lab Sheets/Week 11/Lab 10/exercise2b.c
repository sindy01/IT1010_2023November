//Lab 10 Exercise 2

//Method 2

#include <stdio.h>

int main() 
{
    char itemID[4], name[8];
    int quantity;
    float unitPrice;
    float total = 0.0;

    FILE *file;
    file = fopen("purchase.txt", "w");

    if (file == NULL) 
	{
        printf("Error opening the file.\n");
        return 1;
    }
    
    int i;

    for (i = 1; i <= 4; i++) 
	{
        printf("Enter Item ID : ");
        scanf("%s", itemID);
        printf("Enter Name : ");
        scanf("%s", name);
        printf("Enter Quantity (KG) : ");
        scanf("%d", &quantity);
        printf("Enter Price for 1 KG : ");
        scanf("%f", &unitPrice);

        fprintf(file, "%s %s %d %f\n", itemID, name, quantity, unitPrice); // Write data to the file
    }

    fclose(file);

    // Read the purchase details from the file and calculate the total bill
    file = fopen("purchase.txt", "r");

    if (file == NULL) 
	{
        printf("Error opening the file.\n");
        return 1;
    }

    printf("Item\t\tQuantity\tUnit Price\tPrice (Rs.)\n");

    while (fscanf(file, "%s %s %d %f", &itemID, &name, &quantity, &unitPrice) == 4) 
	{
        float itemTotal = quantity * unitPrice;
        printf("%s\t\t%d\t\t%.2f\t\t%.2f\n", name, quantity, unitPrice, itemTotal);
        total = total + itemTotal;
    }

    printf("Total\t\t\t\t\t\t%.2f\n", total);

    fclose(file);

    return 0;
}


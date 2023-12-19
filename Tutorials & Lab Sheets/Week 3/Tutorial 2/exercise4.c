//Tutorial 2 Exercise 4

#include <stdio.h>

// Define the structure called "item"
struct item 
{
    int itemNo;
    double price;
    int quantity;
}item1,item2;

int main() 
{
    // Input details for item1
    printf("Enter details for Item 1:\n");
    printf("Item No: ");
    scanf("%d", &item1.itemNo);

    printf("Price: ");
    scanf("%lf", &item1.price);

    printf("Quantity: ");
    scanf("%d", &item1.quantity);

    // Input details for item2
    printf("Enter details for Item 2:\n");
    printf("Item No: ");
    scanf("%d", &item2.itemNo);

    printf("Price: ");
    scanf("%lf", &item2.price);

    printf("Quantity: ");
    scanf("%d", &item2.quantity);

    // Print the details of both items
    printf("\nItem No\t\tPrice\t\tQuantity\n");
    printf("%d\t\t%.2lf\t\t%d\n", item1.itemNo, item1.price, item1.quantity);
    printf("%d\t\t%.2lf\t\t%d\n", item2.itemNo, item2.price, item2.quantity);

    return 0;
}


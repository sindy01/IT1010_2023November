#include <stdio.h>

int main() 
{
    FILE *file = fopen("orders.dat", "w");
    
	if (file == NULL) 
	{
        printf("Error opening file for writing.\n");
        return 1;
    }

    int transactionID = 1;
    char type, size;
    int numPizzas;
    
    printf("Enter pizza details (Type [V/C/S], Size [R/L], Number of pizzas): \n\n");
    printf("Enter Pizza Type: ");
    scanf(" %c",&type);
    printf("Enter Pizza Size: ");
    scanf(" %c",&size);
    printf("Enter Number of Pizza(s): ");
    scanf("%d",&numPizzas);

    while (numPizzas != -1) 
	{
        if (type == 'V' || type == 'C' || type == 'S') 
		{
            if (size == 'R' || size == 'L') 
			{
                fprintf(file, "%d %c %c %d\n", transactionID, type, size, numPizzas);
                transactionID++;
            } 
			else 
			{
                printf("Invalid pizza size. Please enter 'R' or 'L'.\n");
            }
        } 
        
		else 
		{
            printf("Invalid pizza type. Please enter 'V' (Veggie), 'C' (Chicken), or 'S' (Seafood).\n");
        }
        
    	printf("Enter Pizza Type: ");
	    scanf(" %c",&type);
	    printf("Enter Pizza Size: ");
	    scanf(" %c",&size);
	    printf("Enter Number of Pizza(s): ");
	    scanf("%d",&numPizzas);
    }
    
    printf("\n\n\n");

    fclose(file);

    // Calculate and display the summary
    int veggieRegular = 0, veggieLarge = 0, chickenRegular = 0, chickenLarge = 0, seafoodRegular = 0, seafoodLarge = 0;

    file = fopen("orders.dat", "r");
    
	if (file == NULL) 
	{
        printf("Error opening file for reading.\n");
        return 1;
    }
    
    fscanf(file, "%d %c %c %d", &transactionID, &type, &size, &numPizzas);

    while(!feof(file))
	{
		printf("%d\t%c\t%c\t%d\n",transactionID, type, size, numPizzas);
		
        if (type == 'V') 
		{
            if (size == 'R') 
			{
                veggieRegular += numPizzas;
            } 
			else 
			{
                veggieLarge += numPizzas;
            }
        } 
		else if (type == 'C') 
		{
            if (size == 'R') 
			{
                chickenRegular += numPizzas;
            } 
			else 
			{
                chickenLarge += numPizzas;
            }
        } 
		else if (type == 'S') 
		{
            if (size == 'R') 
			{
                seafoodRegular += numPizzas;
            } 
			else 
			{
                seafoodLarge += numPizzas;
            }
        }
        fscanf(file, "%d %c %c %d", &transactionID, &type, &size, &numPizzas);
    }

    fclose(file);

	printf("\n\n\n");
    printf("Veggie Pizza\n");
    printf("	Regular: %d\n", veggieRegular);
    printf("	Large: %d\n", veggieLarge);
    printf("Chicken Pizza\n");
    printf("	Regular: %d\n", chickenRegular);
    printf("	Large: %d\n", chickenLarge);
    printf("Seafood Pizza\n");
    printf("	Regular: %d\n", seafoodRegular);
    printf("	Large: %d\n", seafoodLarge);

    return 0;
}


//Tutorial 10 Exercise 1

//Practice to read data from a text file
//Method 2

#include <stdio.h>

int main() 
{
    int newNumber, numberFromFile;
    int exists = 0; // Flag to check if the number exists in the file

    // Open the file for reading
    FILE *num = fopen("number.dat", "r");

    if (num == NULL) 
	{
        printf("Error opening the file.\n");
        return 1;
    }

    // Input a new number from the keyboard
    printf("Enter a new number: ");
    scanf("%d", &newNumber);
    
    // Check if the number exists in the file
    while (fscanf(num, "%d", &numberFromFile) == 1) 	
	{
        if (numberFromFile == newNumber) 
		{
            exists = 1;
            break;
        }
    }

    // Close the file
    fclose(num);
    

    // If the number does not exist, append it to the file
    if (exists==0) 
	{
        // Reopen the file in append mode
        num = fopen("number.dat", "a");

        if (num == NULL) 
		{
            printf("Error opening the file for writing.\n");
            return 1;
        }

        // Append the new number to the file
        fprintf(num, " %d", newNumber);

        // Close the file
        fclose(num);

        printf("Number added to the file.\n");
    } 
    
	else 
	{
        printf("Error: The number already exists in the file.\n");
    }
    
    // Reopen the file in read mode
    num = fopen("number.dat", "r");

    if (num == NULL) 
	{
        printf("Error opening the file for writing.\n");
        return 1;
    }
    
    while(!feof(num))
	{
		fscanf(num, "%d", &numberFromFile); //Read numbers from the file
		printf("%d\n", numberFromFile);
	}
	
	// Close the file
    fclose(num);

    return 0;
}


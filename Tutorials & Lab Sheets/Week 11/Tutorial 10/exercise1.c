//Tutorial 10 Exercise 1

//Practice to read data from a text file

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
    
    fscanf(num, "%d", &numberFromFile);	// Read from file

    // Check if the number exists in the file
    while(!feof(num))	//HAVE SOME ISSUES WITH THIS IMPLEMENTATION - BETTER GO WITH "exercise1b.c"
	{
        if (numberFromFile == newNumber) 
		{
            exists = 1;
            break;
        }
        
        fscanf(num, "%d", &numberFromFile);	// Read from file
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

/*
The vi editor is a powerful and widely used text editor in 
Unix-like operating systems. It has a modal interface, which 
means it has different modes for editing and navigating text.

A .dat file is a common file extension used for data files. 
These files can contain various types of data in a raw or 
binary format, and the specific format and content within 
a .dat file can vary widely depending on the application 
or program that creates it. .dat files do not have a 
standardized structure, so their interpretation depends 
on the context in which they are used.
*/

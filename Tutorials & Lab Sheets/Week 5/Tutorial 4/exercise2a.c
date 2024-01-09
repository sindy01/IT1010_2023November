//Tutorial 4 Exercise 2 Part i,ii,iii

//Practice to write if… else statement

#include <stdio.h>

int main() 
{
    char type;

    printf("Select transaction type ('w' or 'W' for withdrawal, 'd' or 'D' for deposit): ");
    
    // Read the user input using getchar()
    type = getchar();

    // Check transaction type and display messages
    if (type == 'w' || type == 'W') 
	{
        printf("You have selected to withdraw money.\n");
    } 
	else if (type == 'd' || type == 'D') 
	{
        printf("You have selected to deposit money.\n");
    } 
	else 
	{
        printf("You have selected an invalid transaction type.\n");
    }

    return 0;
}


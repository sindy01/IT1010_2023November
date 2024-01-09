//Tutorial 4 Exercise 2 - Full Program

//Practice to write if… else statement

#include <stdio.h>

int main() 
{
    char type;
    float balance, amount;
    
    printf("Select transaction type ('w' or 'W' for withdrawal, 'd' or 'D' for deposit): ");
    
    // Read the user input using getchar()
    type = getchar();
    
     // Input bank balance and amount
    printf("Enter bank balance: ");
    scanf("%f", &balance);
    
    printf("Enter amount: ");
    scanf("%f", &amount);
    
    // Check transaction type and display messages
    if (type == 'w' || type == 'W') 
	{
        printf("You have selected to withdraw money.\n");
        balance = balance - amount;
        printf("New balance after withdrawal: %.2f\n", balance);
        
    } 
	else if (type == 'd' || type == 'D') 
	{
        printf("You have selected to deposit money.\n");
        balance = balance + amount;
        printf("New balance after deposit: %.2f\n", balance);
    } 
	else 
	{
        printf("You have selected an invalid transaction type.\n");
    }

    return 0;
}



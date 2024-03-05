//Lab 10 Exercise 3

#include <stdio.h>

int main() 
{
	int accNo;
	char nic[20], name[50];
    float balance, customerBalance = 0;
    char transactionType;
    float transactionAmount;
        
    // Input Account Details
    FILE *account;
    account = fopen("account.txt", "w");

    if (account == NULL) 
	{
        printf("Error opening account.txt.\n");
        return 1;
    }

    printf("Input account details for 4 customers:\n");
    
    int i;
	for (i = 0; i < 4; i++) 
	{
        printf("Account No: ");
        scanf("%d", &accNo);
        printf("NIC No: ");
        scanf("%s", nic);
        printf("Customer Name: ");
        scanf("%s", name);
        printf("Account Balance: ");
        scanf("%f", &balance);

        fprintf(account, "%d %s %s %.2f\n", accNo, nic, name, balance);
    }

    fclose(account);

    // Input Account Number
    int accountNo;
    printf("\n\nEnter the account number: ");
    scanf("%d", &accountNo);
    
    account = fopen("account.txt", "r");

    if (account == NULL) 
    {
        printf("Error opening account.txt.\n");
        return 1;
    }
    
    while(!feof(account))
	{
		fscanf(account, "%d %s %s %f", &accNo, nic, name, &balance);
   		
   		if(accountNo == accNo)
   		{
   			customerBalance = balance;
		}
	}
	
	fclose(account);
	
	// If provided account number doesn't exist
	if (customerBalance == 0)
    {
        printf("Invalid Account Number.");
        return 1;
    }
	
	// Perform Transaction
	
	FILE *transaction;
    transaction = fopen("transaction.txt", "r");

    if (transaction == NULL) 
	{
        printf("Error opening transaction.txt.\n");
        return 1;
    }
    
    while(!feof(transaction))
	{
		fscanf(transaction , "%c %f" , &transactionType , &transactionAmount) ;
   		
   		if (transactionType == 'D')
			customerBalance = customerBalance + transactionAmount;
		else if (transactionType == 'W')
			customerBalance = customerBalance - transactionAmount;
	}
	
	printf("\n\nUpdated Account Balance is %.2f" , customerBalance) ;
	
	fclose(transaction);

    return 0;
}


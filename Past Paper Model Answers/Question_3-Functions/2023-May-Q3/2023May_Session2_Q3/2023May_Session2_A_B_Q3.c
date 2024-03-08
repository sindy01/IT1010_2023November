#include <stdio.h>
#include <assert.h>

double paymentAmount(int date, char cardType, double amount);
void displayLoyaltytype(double payment);
void testpaymentAmount();

int main() 
{
    int date;
    char cardType;
    double amount;

    printf("Enter the Date (23-26): ");
    scanf("%d", &date);

    printf("Enter Card Type (a, b, or c): ");
    scanf(" %c", &cardType);

    printf("Enter Amount: ");
    scanf("%lf", &amount);

    double totalPayableAmount = paymentAmount(date, cardType, amount);
    printf("Total Payable Amount: %.2lf\n", totalPayableAmount);
    
    if(date >= 23 && date <= 26)
	{
    	displayLoyaltytype(totalPayableAmount);
	}
    
    // Call the test function to test paymentAmount
    testpaymentAmount();

    return 0;
}

// Function to calculate the total payable amount after deducting discount
double paymentAmount(int date, char cardType, double amount) 
{
    double discount = 0.0;

    if (date == 23 && cardType == 'a') 
	{
        discount = 0.20;
    } 
	else if (date == 24 && cardType == 'b') 
	{
        discount = 0.25;
    } 
	else if (date == 25 && cardType == 'c') 
	{
        discount = 0.30;
    } 
	else if ((date == 26 && cardType == 'b') || (date == 26 && cardType == 'c')) 
	{
        discount = 0.20;
    }
    else
    {
    	discount = 0.0;
	}

    double totalPayable = amount - (amount * discount);
    return totalPayable;
}

// Function to determine the loyalty card type
void displayLoyaltytype(double payment) 
{
    if (payment > 25000) 
	{
        printf("Loyalty card type: Gold\n");
    } 
	else if (payment >= 10000) 
	{
        printf("Loyalty card type: Silver\n");
    } 
	else if (payment >= 0)
	{
        printf("Loyalty card type: Bronze\n");
    }
    else
    {
    	printf("Invalid Payment.\n");
	}
}

// Function to test the paymentAmount function with assert statements
void testpaymentAmount() 
{
    assert(paymentAmount(23, 'a', 5000.0) == 4000.0); // 20% discount on December 23 for card type 'a'
    assert(paymentAmount(26, 'a', 8000.0) == 8000.0); // No discount on December 26 for card type 'a'
    assert(paymentAmount(25, 'c', 12000.0) == 8400.0); // 30% discount on December 25 for card type 'c'
}


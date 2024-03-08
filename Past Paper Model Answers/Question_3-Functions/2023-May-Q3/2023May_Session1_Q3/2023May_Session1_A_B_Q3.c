#include <stdio.h>
#include <assert.h>

double PayableAmount(char vehicleType, int NumDays);
double paymentAfterTax(double payment);
void testpaymentAfterTax();

int main() 
{
    char vehicleType;
    int NumDays;

    printf("Enter Vehicle Type (a/b): ");
    scanf(" %c", &vehicleType); // Read the vehicle type as a character

    printf("Enter Number of Days: ");
    scanf("%d", &NumDays);
    
    if(NumDays >=1)
    {
    	double payableAmount = PayableAmount(vehicleType, NumDays);
    	double finalPayableAmount = paymentAfterTax(payableAmount);
    
    	printf("Payable Amount: %.2lf\n", payableAmount);
    	printf("Final Payable Amount after Tax: %.2lf\n", finalPayableAmount);
    
	}

    // Call the test function to test paymentAfterTax
    testpaymentAfterTax();

    return 0;
}

// Function to calculate the payable amount after applying the discount
double PayableAmount(char vehicleType, int NumDays) 
{
    double rentalRate = 0.0;

    if (vehicleType == 'a') 
	{
        rentalRate = 5000.0;
    } 
	else if (vehicleType == 'b') 
	{
        rentalRate = 8000.0;
    } 
	else 
	{
        printf("Invalid Vehicle Type.\n");
    }

    double discount = 0.0;
    if (NumDays >= 7) 
	{
        discount = 0.20; // 20% discount for 7 days or more
    } 
	else if (NumDays >= 4) 
	{
        discount = 0.10; // 10% discount for 4-6 days
    }
    else if (NumDays >= 1) 
	{
        discount = 0.00; // No discount for 1-3 days
    }
    else 
	{
        printf("Invalid Number of Days.\n");
    }

    double amount = rentalRate * NumDays;
    double discountAmount = amount * discount;
    double payableAmount = amount - discountAmount;
    
    return payableAmount;
}

// Function to calculate the final payable amount to the customer with tax
double paymentAfterTax(double payment) 
{
    double taxRate = 0.0;

    if (payment > 15000) 
	{
        taxRate = 0.10; // 10% tax for payable amount > 15000
    } 
	else if (payment >= 10000) 
	{
        taxRate = 0.05; // 5% tax for payable amount between 10000 and 15000
    }
    else if (payment < 10000)
    {
    	taxRate = 0.00;
	}
	 else 
	{
        printf("Invalid Payment.\n");
        return -1;
    }

    return (payment + payment * taxRate);
}

// Function to test the paymentAfterTax function with assert statements
void testpaymentAfterTax() 
{
    assert(paymentAfterTax(9000.0) == 9000.0);  // No tax for payable amount < 10000
    assert(paymentAfterTax(12000.0) == 12600.0); // 5% tax for payable amount between 10000 and 15000
    assert(paymentAfterTax(16000.0) == 17600.0); // 10% tax for payable amount > 15000
}



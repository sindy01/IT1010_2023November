#include <stdio.h>
#include <assert.h>

float calcpayment(int pType, float totalData);
float calcTax(float payment);
void displayDetails(float payment, float tax);

int main() 
{
	assert(calcpayment(1,1)==120);
	assert(calcpayment(1,2)==1144);
	
    int packageType;
    float totalDataUsage;
    int i;

    for (i = 1; i <= 3; i++) 
	{
        printf("Enter Package Type (1-4) for Customer %d: ", i);
        scanf("%d", &packageType);

        printf("Enter Total Data Usage (in GB) for Customer %d: ", i);
        scanf("%f", &totalDataUsage);

        float payment = calcpayment(packageType, totalDataUsage);
        float tax = calcTax(payment);

        printf("\nCustomer %d:\n", i);
        displayDetails(payment, tax);
    }

    return 0;
}

// Function to calculate and return the payment
float calcpayment(int pType, float totalData) 
{
    float payment = 0.0;
    float excessCharge = 0.0;

    switch (pType) 
	{
        case 1:
        	if(totalData>1.5)
        	{
        		excessCharge = (totalData - 1.5) * 2.0 * 1024; // Excess usage charge for Package 1
			}
            payment = excessCharge + 120.0; // Monthly subscription fee for Package 1
            break;
        case 2:
        	if(totalData>5.0)
			{
				excessCharge = (totalData - 5.0) * 1.5 * 1024;
			}
            payment = excessCharge + 350.0; 
            break;
        case 3:
        	if(totalData>10.0)
        	{
        		excessCharge = (totalData - 10.0) * 1.0 * 1024;
			} 
            payment = excessCharge + 660.0; 
            break;
        case 4:
        	if(totalData>10.0)
        	{
        		excessCharge = (totalData - 20.0) * 0.5 * 1024;
			}             
            payment = excessCharge + 1200.0; 
            break;
        default:
            printf("Invalid Package Type.\n");
    }

    return payment;
}

// Function to calculate and return the tax amount
float calcTax(float payment) 
{
    return payment * 0.05; // 5% tax
}

// Function to display details
void displayDetails(float payment, float tax) 
{
    float monthlyBillPayment = payment + tax;
    printf("\nPayment\tTax amount\tMonthly bill payment\n");
    printf("%.2f\t%.2f\t\t%.2f\t\n\n",payment,tax,monthlyBillPayment);
}


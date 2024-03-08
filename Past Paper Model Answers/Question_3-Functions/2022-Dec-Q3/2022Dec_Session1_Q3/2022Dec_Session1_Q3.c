#include <stdio.h>
#include <assert.h>

float calcInterest(int FDType, float depositAmount);
float calcTax(float annualInterest);
void displayDetails(float interest, float taxAmount);

int main() 
{
	assert(calcInterest(1,10000)==1600);
	assert(calcInterest(3,20000)==3100);
	
    int FDType;
    float depositAmount;
    
    printf("Enter Fixed Deposit Type (1-4) or -1 to exit : ");
    scanf("%d", &FDType);

    while (FDType != -1) 
	{
        printf("Enter Deposit Amount : ");
        scanf("%f", &depositAmount);

        float interest = calcInterest(FDType, depositAmount);
        float taxAmount = calcTax(interest);

        displayDetails(interest, taxAmount);
        
        printf("Enter Fixed Deposit Type (1-4) or -1 to exit : ");
    	scanf("%d", &FDType);
    }

    return 0;
}

// Function to calculate and return annual interest
float calcInterest(int FDType, float depositAmount) 
{
    float annualInterest = 0.0;

    switch (FDType) 
	{
        case 1:
            annualInterest = depositAmount * 0.16;
            break;
        case 2:
            annualInterest = depositAmount * 0.15;
            break;
        case 3:
            annualInterest = depositAmount * 0.155;
            break;
        case 4:
            annualInterest = depositAmount * 0.175;
            break;
        default:
            printf("Invalid Fixed Deposit Type\n");
    }

    return annualInterest;
}

// Function to calculate withholding tax amount
float calcTax(float annualInterest) 
{
    return annualInterest * 0.05; // 5% withholding tax
}

// Function to display details
void displayDetails(float interest, float taxAmount) 
{
    float amountPayable = interest - taxAmount;
    printf("Annual Interest\tTax amount\tAmount Payable\n");
    printf("%.2f\t\t%.2f\t\t%.2f\n\n",interest,taxAmount,amountPayable);
}


#include <stdio.h>
#include <assert.h>

float calcpayment(int age, float size);
float calcsubsidy(float payment);
void displayDetails(float payment, float subsidy);

int main() 
{
	assert(calcpayment(3,2)==4080);
	assert(calcpayment(6,2.5)==13187.50);
	
    int age;
    float size;
    int i;

    for (i = 1; i <= 3; i++) 
	{
        printf("Enter the age of the paddy crops in weeks for Farmer %d: ", i);
        scanf("%d", &age);

        printf("Enter the paddy field size in Hectare for Farmer %d: ", i);
        scanf("%f", &size);

        float payment = calcpayment(age, size);
        float subsidy = calcsubsidy(payment);

        printf("\nFarmer %d:\n", i);
        displayDetails(payment, subsidy);
    }

    return 0;
}

// Function to calculate and return the fertilizer payment
float calcpayment(int age, float size) 
{
    float payment = 0.0;
    float urea = 0.0;
    float tsp = 0.0;
    float mop = 0.0;

    if (age >= 0 && age < 2) 
	{
        urea = 0.0;
        tsp = 35.0;
        mop = 0.0;
    } 
	else if (age >= 2 && age < 4) 
	{
        urea = 30.0;
        tsp = 0.0;
        mop = 0.0;
    } 
	else if (age >= 4 && age < 6) 
	{
        urea = 65.0;
        tsp = 0.0;
        mop = 25.0;
    } 
	else if (age >= 6 && age < 7) 
	{
        urea = 50.0;
        tsp = 0.0;
        mop = 25.0;
    } 
	else if (age >= 7)
	{
        urea = 30.0;
        tsp = 0.0;
        mop = 0.0;
    }
    else
    {
    	printf("Invalid age of paddy crops in weeks.\n");
	}
	
	if (size > 0)
	{
		payment = (urea * 68 + tsp * 60 + mop * 75) * size;
	}
	 else
    {
    	printf("Invalid paddy field size in Hectare.\n");
	}
    
    return payment;
}

// Function to calculate and return the subsidy amount
float calcsubsidy(float payment) 
{
    return payment * 0.15; // 15% subsidy
}

// Function to display details
void displayDetails(float payment, float subsidy) 
{
    printf("\nPayable amount\tSubsidy amount\n");
    printf("%.2f\t\t%.2f\n\n",payment-subsidy,subsidy);
}


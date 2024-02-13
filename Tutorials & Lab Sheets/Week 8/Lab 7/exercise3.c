//Lab 7 Exercise 3

#include <stdio.h>
#include <assert.h>

float calPayment(char packageType);
float calDiscount(int age, float payment);
void testDiscount();

int main() 
{
    // Call the testDiscount() function to check the discount calculation
    testDiscount();

    char packageType;
    int age;

    printf("Enter package type (S/C/H): ");
    scanf(" %c", &packageType);

    printf("Enter patient's age: ");
    scanf("%d", &age);

    // Calculate the payment using the calPayment function
    float payment = calPayment(packageType);
    
    printf("Payment for the package is: Rs. %.2f\n", payment);
    
    // Calculate the discount using the calDiscount function
    float discount = calDiscount(age, payment);
    
    printf("Discount for the package is: Rs. %.2f\n", discount);
    
    // Deduct the discount from the payment
    payment = payment - discount;
    
    printf("Net amount needed to be paid: Rs. %.2f\n", payment);
    
    return 0;
}

// Function to calculate and return the payment based on package type
float calPayment(char packageType) 
{
    float payment = 0;

    switch (packageType) 
	{
        case 'S':
            payment = 15000;
            break;
        case 'C':
            payment = 50000;
            break;
        case 'H':
            payment = 30000;
            break;
        default:
            printf("Invalid package type!\n");
            break;
    }

    return payment;
}

// Function to calculate and return the discount based on age and payment
float calDiscount(int age, float payment) 
{
    float discount = 0.0;

    // Check if the patient is a senior citizen (age 60 or above)
    if (age >= 60) 
	{
        // Calculate the discount as 10% of the payment
        discount = 0.10 * payment;
    }

    return discount;
}

// Function to test the calDiscount function
void testDiscount() 
{
    // Test case 1: Senior citizen (age 65) with a payment of 50000
    assert(calDiscount(65, 50000) == 5000.0);

    // Test case 2: Non-senior citizen (age 45) with a payment of 30000
    assert(calDiscount(45, 30000) == 0.0);
    
    printf("Unit Test Passed.\n\n");
}




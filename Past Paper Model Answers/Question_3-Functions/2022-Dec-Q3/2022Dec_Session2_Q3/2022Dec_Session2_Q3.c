#include <stdio.h>
#include <assert.h>

float calcRemainingFuel(int vehicleType, float usedFuelQuota);
float calcFuelCost(int vehicleType, float usedFuelQuota);
void displayDetails(int vType, float usedFuelQuota, float remainingQuota, float cost);

int main() 
{
	assert(calcRemainingFuel(1,3.5)==1.5);
	assert(calcRemainingFuel(3,12.25)==7.75);
	
    int vehicleType;
    float usedFuelQuota;
    float allowedFuelQuota;
    float fuelPrice;

	printf("Enter Vehicle Type (1-4) or -1 to exit: ");
    scanf("%d", &vehicleType);
        
    while (vehicleType != -1) 
	{
        printf("Enter Quota Used (liters): ");
        scanf("%f", &usedFuelQuota);

        float remainingQuota = calcRemainingFuel(vehicleType, usedFuelQuota);
        float fuelCost = calcFuelCost(vehicleType, usedFuelQuota);

        displayDetails(vehicleType, usedFuelQuota, remainingQuota, fuelCost);
        
        printf("Enter Vehicle Type (1-4) or -1 to exit: ");
    	scanf("%d", &vehicleType);
    }

    return 0;
}

// Function to calculate and return remaining fuel quota
float calcRemainingFuel(int vehicleType, float usedFuelQuota) 
{
	float allowedFuelQuota=0;
    switch (vehicleType) 
	{
            case 1:
                allowedFuelQuota = 5;
                break;
            case 2:
                allowedFuelQuota = 20;
                break;
            case 3:
                allowedFuelQuota = 20;
                break;
            case 4:
                allowedFuelQuota = 30;
                break;
            default:
            	printf("Invalid vehicle type.");
        }
        
        return (allowedFuelQuota-usedFuelQuota);
}

// Function to calculate and return the amount spent on fuel
float calcFuelCost(int vehicleType, float usedFuelQuota) 
{
	float fuelPrice=0;
    switch (vehicleType) 
	{
            case 1:
                fuelPrice = 370.00;
                break;
            case 2:
                fuelPrice = 370.00;
                break;
            case 3:
                fuelPrice = 510.00;
                break;
            case 4:
                fuelPrice = 370.00;
                break;
            default:
            	printf("Invalid vehicle type.");
    }
    
	return (usedFuelQuota * fuelPrice);

}

// Function to display details
void displayDetails(int vType, float usedFuelQuota, float remainingQuota, float cost) 
{
	printf("\nVehicle type\tQuota used\tQuota Remaining\tFuel Cost\n");
	printf("%d\t\t%.2f\t\t%.2f\t\t%.2f\n\n",vType,usedFuelQuota,remainingQuota,cost);
}

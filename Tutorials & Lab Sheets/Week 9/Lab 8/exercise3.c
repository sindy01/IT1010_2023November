//Lab 8 Exercise 3

#include <stdio.h>

int main() 
{

    // Array to store monthly rainfall data
    float data[12];
    int i;

    // Input monthly rainfall values from the keyboard
    printf("Enter the monthly rainfall data for the year (in mm):\n");
    
    for (i = 0; i < 12; i++) 
	{
        printf("Month %d: ", i + 1);
        scanf("%f", &data[i]);
    }

    // Find the month with the maximum rainfall
    float maxRainfall = data[0];
    int maxMonth = 0;
    for (i = 1; i < 12; i++) 
	{
        if (data[i] > maxRainfall) 
		{
            maxRainfall = data[i];
            maxMonth = i;
        }
    }

    // Find the month with the minimum rainfall
    float minRainfall = data[0];
    int minMonth = 0;
    for (i = 1; i < 12; i++) 
	{
        if (data[i] < minRainfall) 
		{
            minRainfall = data[i];
            minMonth = i;
        }
    }

    // Display results
    printf("Month with the maximum rainfall: Month %d (%.2f mm)\n", maxMonth + 1, maxRainfall);
    printf("Month with the minimum rainfall: Month %d (%.2f mm)\n", minMonth + 1, minRainfall);

    return 0;
}

/*
Set Break Point at Line number 14

Add watch to the following variables :
data
i
maxRainfall
maxMonth
minRainfall
minMonth
*/

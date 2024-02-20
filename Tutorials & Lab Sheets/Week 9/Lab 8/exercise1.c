//Lab 8 Exercise 1

//Storage and Display in 1D Arrays

#include <stdio.h>

int main(void)
{
	int numbers[5] = {0};
	int i;
	
	for(i = 0; i < 5; i++) //Store integer values within the array
	{
		printf("Enter integer value : ");
		scanf("%d", &numbers[i]);
	}
	
	printf("\nArray Elements : ");
	
	for(i = 0; i < 5; i++) //Display array element
	{
		printf("%d\t", numbers[i]);
	}
	
	return 0;
}

/*
Set Break Point at Line number 11

Add watch to the following variables :
numbers
i
numbers[0]
numbers[1]
numbers[2]
numbers[3]
numbers[4]
*/

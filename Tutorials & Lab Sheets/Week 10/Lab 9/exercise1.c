//Lab 9 Exercise 1

//Storage and Display in 2D Arrays

#include <stdio.h>

int main(void)
{
	int numbers[4][3] = {0};
	int i, j;
	
	for(i = 0; i < 4; i++) //Store integer values
	{
		for(j = 0; j < 3; j++)
		{
			printf("Enter integer value : ");
			scanf("%d", &numbers[i][j]);
		}
	}
	
	printf("\nArray Elements : ");
	
	for(i = 0; i < 4; i++) //Display array element
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d\t", numbers[i][j]);
		}
	}
	
	return 0;
}

/*
Set Break Point at Line number 10

Add watch to the following variables :
numbers
i
j
numbers[0][0],numbers[0][1],numbers[0][2],
numbers[1][0],numbers[1][1],numbers[1][2],
numbers[2][0],numbers[2][1],numbers[2][2],
numbers[3][0],numbers[3][1],numbers[3][2]
*/

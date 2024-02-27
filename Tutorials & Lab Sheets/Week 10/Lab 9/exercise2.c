//Lab 9 Exercise 2

//Storage and Display in 2D Arrays

#include <stdio.h>

int main(void)
{
	int units[3][4] = {0};
	int i, j, max, cusId, month;
	
	for(i = 0; i < 3; i++) //Store user input
	{
		printf("Details of Cutomer ID %d\n", i + 1);
		for(j = 0; j < 4; j++)
		{
			printf("Enter no. of units for month %d : ", j + 1);
			scanf("%d", &units[i][j]);
		}
		printf("\n");
	}
	
	max = units[0][0];
	
	for(i = 0; i < 3; i++) //Find maximum value
	{
		for(j = 0; j < 4; j++)
		{
			if(units[i][j] > max)
			{
				max = units[i][j];
				cusId = i + 1;
				month = j + 1;
			}
		}
	}
	
	/*
	if (max == units[0][0])
	{
		cusId = 1, month =1;
	}
	*/
	
	printf("For month %d, Customer ID %d has ", month, cusId);
	printf("maximum units : %d\n", max);
	
	return 0;
}

/*
Set Break Point at Line number 11

Add watch to the following variables :
units
i
j
max
cusId
month
units[0][0],units[0][1],units[0][2],units[0][3],
units[1][0],units[1][1],units[1][2],units[1][3],
units[2][0],units[2][1],units[2][2],units[2][3]
*/

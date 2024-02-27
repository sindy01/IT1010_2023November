//Tutorial 9 Exercise 2

//Practice to manipulate 2D arrays

#include <stdio.h>

int main() 
{
    int matrix1[4][4] = {{5,7,8,10},{9,3,0,6},{8,1,9,2},{4,7,2,1}};

    int matrix2[4][4] = {{2,2,1,3},{8,1,3,1},{1,2,2,4},{3,1,1,2}};

    int result[4][4]; // The matrix to store the result
    
    int i,j;

    // Perform matrix addition and display the resulting matrix
    for (i = 0; i < 4; i++) 
	{
        for (j = 0; j < 4; j++) 
		{
            result[i][j] = matrix1[i][j] + matrix2[i][j];	//Matrix addition & storage
            printf("%d\t", result[i][j]);	//Display from resulting matrix
        }
        printf("\n");
    }

    return 0;
}


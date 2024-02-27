//Lab 9 Exercise 3

//Storage and Display in 2D Arrays

#include <stdio.h>

int main() 
{

    // Create a 2D array to store exam marks
    int marks[3][3];
    int i,j;

    // Input exam marks for each student and module
    for (i = 0; i < 3; i++) 
	{
        printf("Student no: %d\n", i + 1);
        
        for (j = 0; j < 3; j++) 
		{
            printf("Score %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    // Calculate and display the average mark for each student
    printf("\nStudent No\tExam Scores\tAverage\n");
    
    for (i = 0; i < 3; i++) 
	{
        int total = 0;
        printf("%d\t\t", i + 1);
        
        for (j = 0; j < 3; j++) 
		{
            printf("%d ", marks[i][j]);
            total += marks[i][j];
        }
        
        float average = (float)total / 3;
        printf("\t%.2f\n", average);
    }

    return 0;
}


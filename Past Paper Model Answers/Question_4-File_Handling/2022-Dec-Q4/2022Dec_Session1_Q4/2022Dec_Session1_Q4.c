#include <stdio.h>

int main() 
{
    FILE *file = fopen("answers.dat", "w");
    
    if (file == NULL) 
	{
        printf("Error opening file for writing.\n");
        return 1;
    }

    char studentID[10];
    int ans;
    int answers[4];
    int correctAnswers[] = {1, 4, 2, 3};
    int i,j;

    for (i = 1; i <= 5; i++) 
	{
        printf("Enter student ID (ITXXXXXX) for student %d: ", i);
        scanf("%s", studentID);

        printf("Enter answers (1 to 5) for the 4 questions for student %d:\n", i);
        for (j = 0; j < 4; j++) 
		{
			printf("Answer for Question %d: ",j+1);
            scanf("%d", &ans);
            
            if(ans>=1 && ans<=5)
            {
            	answers[j]=ans;
			}
			else
			{
				printf("Invalid answer (Enter 1 to 5).\n");
				j--;
			}
        }

        fprintf(file, "%s", studentID);
        
        for (j = 0; j < 4; j++) 
		{
            fprintf(file, " %d", answers[j]);
        }
        
        fprintf(file, "\n");
    }
    
    printf("\n\n");

    fclose(file);

    // Calculate and display the number of correct answers for each student
    file = fopen("answers.dat", "r");
    
    if (file == NULL) 
	{
        printf("Error opening file for reading.\n");
        return 1;
    }
    
    printf("Student ID\tCorrect Answers\n");

    for (i = 1; i <= 5; i++) 
	{
        fscanf(file, "%s", studentID);
        
        for (j = 0; j < 4; j++) 
		{
            fscanf(file, "%d", &answers[j]);
        }

        int correctCount = 0;
        
        for (j = 0; j < 4; j++) 
		{
            if (answers[j] == correctAnswers[j]) 
			{
                correctCount++;
            }
        }
        
        printf("%s\t\t%d\n", studentID, correctCount);
    }

    fclose(file);

    return 0;
}


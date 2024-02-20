//Tutorial 8 Exercise 1 Method B

//Practice to store and print data in an array

#include <stdio.h>

int main() 
{

    // Array to store marks of 10 students
    int marks[10];
    int i;

    // Input marks for each student, ensuring they are within the range [0, 20]
    printf("Enter the marks for 10 students (between 0 and 20):\n");
    
    for (i = 0; i < 10;) 
	{
        int mark;
        printf("Student %d mark: ", i + 1);
        scanf("%d", &mark);

        // Check if the mark is within the valid range
        if (mark >= 0 && mark <= 20) 
		{
            marks[i] = mark;
            i++;
        } 
		else 
		{
            printf("Invalid mark! Please enter a mark between 0 and 20.\n");
        }
    }

    // Display the entered marks
    printf("Entered marks for 10 students:\n");
    
    for (i = 0; i < 10; i++) 
	{
        printf("Student %d mark: %d\n", i + 1, marks[i]);
    }

    return 0;
}


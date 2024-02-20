//Tutorial 8 Exercise 2

//Practice to access data stored in an array

#include <stdio.h>

int main() 
{

    // Array to store marks of 10 students
    int marks[10];
    int i = 0;

    // Input marks for each student, ensuring they are within the range [0, 20]
    printf("Enter the marks for 10 students (between 0 and 20):\n");
    
    while(i<10)
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
    
    // Calculate the sum of the entered marks
    int total = 0;
    
    for (i = 0; i < 10; i++) 
	{
        total = total + marks[i];
    }
    
     // Calculate and display the mean (average) of the marks
    float mean = (float)total/10;
     
    printf("Mean of the entered marks: %.2f\n", mean);

    return 0;
}


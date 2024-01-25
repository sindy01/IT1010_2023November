//Lecture 8 Exercise 1 - Slide 6
//Writing data to a sequential-access file

#include <stdio.h>

int main() 
{
    // Open the file "marks.dat" in write mode
    FILE *file;
	file = fopen("marks.dat", "w");

    if (file == NULL) 
	{
        printf("Error opening the file.\n");
        return 1;
    }
    
    char student_id[10];
    char student_name[20];
    float avgMarks;

    // Input student information from the keyboard
    printf("Enter student ID: ");
    scanf("%s", student_id);

    printf("Enter student name: ");
    scanf("%s", student_name);

    printf("Enter average marks: ");
    scanf("%f", &avgMarks);

    // Write the student information to the file
    fprintf(file, "%s %s %.2f\n", student_id,student_name,avgMarks);

    // Close the file
    fclose(file);

    printf("Student data has been written to 'marks.dat'.\n");

    return 0;
}


//Lecture 8 Example 2 - Slide 7
//Writing multiple records to a sequential file

#include <stdio.h>

 int main(void)
{
	char ID[10];
	char name[30];
	double avgMarks;
	int i;
	
	FILE *cfPtr;
	cfPtr = fopen("marks2.dat", "w");
	
	if (cfPtr == NULL)
	{
		printf("File cannot be open");
		return -1;
	}
	
	for(i = 1; i <= 5; ++i)
	{
		printf("Please input the student ID : ");
        scanf("%s", ID);
        printf("Please input the name : ");
        scanf("%s", name);
        printf("Please input the average marks : ");
        scanf("%lf", &avgMarks);
		fprintf(cfPtr, "%s %s %.2f\n", ID, name, avgMarks);
	}
	
	fclose(cfPtr);
	
	return 0;
}

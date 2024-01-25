//Lecture 8 Example 5 - Slide 10
//Reading multiple records from a sequential file

#include <stdio.h>

 int main(void)
{
	FILE *cfPtr;
	char ID[10];
	char name[30];
	double avgMarks;
	
	cfPtr = fopen("marks2.dat", "r");
	
	if ( cfPtr == NULL)
	{
		printf("File cannot be open");
		return -1;
	}
	
	fscanf(cfPtr, "%s %s %lf", ID, name, &avgMarks);
	
	while (!feof(cfPtr))
	{
		printf ("%s %s %lf \n", ID, name, avgMarks);
		fscanf(cfPtr, "%s %s %lf", ID, name, &avgMarks);
	}	
	
	fclose(cfPtr);
	
	return 0;
}

/*
feof() is a standard library function that stands for "end of file." 
It is used to determine whether the end of a file has been reached 
after performing input operations (e.g., reading from a file using 
functions like fscanf() or fread()). feof() returns a non-zero value 
(true) if the end of the file has been reached, and 0 (false) otherwise.

zero value - end of the file is NOT reached
non-zero value - end of the file is reached

You typically use feof() in a loop after reading data from a file 
to determine if you've reached the end of the file. It's important 
to note that feof() only returns true after an attempt to read past 
the end of the file. It doesn't predict whether a future read operation 
will reach the end of the file.
*/

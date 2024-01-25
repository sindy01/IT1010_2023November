//Lecture 8 Example 3 - Slide 8
//Reading data from a sequential–access file

#include <stdio.h>

int main( void)
{
    int number;

    FILE *cfPtr;
    
    cfPtr = fopen("number.dat", "r");

    if ( cfPtr == NULL)
    {
        printf("File could not be opened\n");
        return -1;
    }
    
    fscanf(cfPtr, "%d", &number);
    
    printf("Number is : %d \n", number );
    
    fclose(cfPtr); 
	 
    return 0;
}

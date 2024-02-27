//Lecture 8 Example 1 - Slide 5
//Writing data to a sequential-access file

#include <stdio.h>

int main(void)
{
    int number = 21;

    FILE *cfPtr;	//Declaring a file pointer
    
    cfPtr = fopen("number.dat", "w"); //Open a file to write data (Creates “number.dat” file to store/write data)

    if (cfPtr == NULL)
    {
        printf("Cannot create file\n");
        return -1;
    }
    
    fprintf(cfPtr, "%d\n", number);
    
    fclose(cfPtr);  //Close each file as soon as it’s no longer needed. 
    
    return 0;
}

     





//Tutorial 8 Exercise 4

//Practice to manipulate data in arrays

#include <stdio.h>

int main() 
{
    int array[10];
    int m;
    
    printf("Enter integers for the array:\n");
    for (m = 0; m < 10; m++) 
	{
        printf("Element %d: ", m + 1);
        scanf("%d", &array[m]);
    }
    
    int i,j;

    printf("\n\nElement\tValue\tHistogram\n");

    for (i = 0; i < 10; i++) 
	{
        printf("%d\t%d\t", i, array[i]);
        
        for (j = 0; j < array[i]; j++) 
		{
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


//Lecture 7 Example 8 - Slide 15
//Function strcpy

# include <stdio.h>
# include <string.h>
# define SIZE1 25

int main ( void )
{
    char x[]= "Happy Birthday to You";
    char y[SIZE1];

    strcpy(y,x);	//strcpy(y,x) copy the entire string in array x into y
    printf("The string in array y is : %s\n", y);
    
    return 0;	
} 

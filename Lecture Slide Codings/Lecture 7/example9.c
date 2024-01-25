//Lecture 7 Example 9 - Slide 16
//Function strlen

# include <stdio.h>
# include <string.h>

int main (void)
{
    char string1[]= "I love C programming";
    printf("The length of string1 is %d", strlen(string1)); 
    //strlen takes a string as an argument and return the number of characters in the string. 
    
    return 0;	
} 

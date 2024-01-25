//Lecture 7 Example 6 - Slide 13
//Storing strings in character arrays

#include <stdio.h>

int main(void)
{
	char  string1[ ] = "first"; 
	
	char  string2[ ] = {'f', 'i', 'r', 's', 't', '\0'}; 
	
	char  string3[ ] = {'f', 'i', 'r', 's', 't'}; 
	
	printf("%s",string1);
	printf("\n");
	printf("%s",string2);
	printf("\n");
	printf("%s",string3);
	printf("\n");
	
	char string4[30];
	scanf("%s", &string4);
	printf("%s",string4);
	
	printf("\n\n");
	
	char string5[30];
	scanf("%19s", &string5); //only a maximum of 19 characters will be read / taken as input
	printf("%s",string5);

	return 0;
}

/*
Defined an array string2 of type char that holds the characters 
'f', 'i', 'r', 's', and 't', along with a null-terminator '\0' 
at the end to mark the end of the string.

"%19s" is the format specifier for reading a string, where 19 specifies 
the maximum number of characters to read, including the null-terminator. 
This helps prevent buffer overflows.

string3 is the name of the character array where scanf will store the 
input string. You don't need to use the address-of operator (&) before 
string3 because string3 itself represents the address of the first element 
of the array. In C, when you use the name of an array as an argument to a 
function like scanf, it effectively passes a pointer to the first element of the array.
*/


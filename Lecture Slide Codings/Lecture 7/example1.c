//Lecture 7 Example 1 - Slide 7
//Initializing the elements of an array to zeros

#include <stdio.h>

int main(void)
{
	int n[5]; // n is an array of 5 integers
	int i; // counter

	//initialize elements of array n to 0
	for( i = 0; i < 5; ++i)
     	n[i] = 0;

	printf("%s%13s\n",  "Element",  "Value");

	//output contents of array n in a tabular format
	for( i = 0; i < 5; ++i)
     	printf("%7d%13d\n", i , n[i]); 
    
	return 0;
}

/*

%s is a format specifier for a string. It indicates that the 
next argument (in this case, "Element") should be treated as 
a string and printed as is.

%13s is another format specifier for a string. The 13 in %13s 
is a width specifier, which means that the string should be 
printed with a minimum width of 13 characters. 
If the string is shorter than 13 characters, spaces will be 
added to the left to pad it to the specified width. 

[Here “Value” is having the width of 5, thus 13-5 = 8 spaces 
are added to the left]

%7d is a format specifier for an integer. It indicates that the 
first integer argument (in this case, i) should be printed with 
a minimum width of 7 characters. If the integer has fewer than 7 
digits, spaces will be added to the left to pad it to the specified width.

*/

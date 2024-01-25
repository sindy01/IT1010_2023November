//Lecture 7 Example 7 - Slide 14
//Display character strings

#include <stdio.h>

int main(void)
{
	char  string1[] = "SLIIT NORTHERN UNI"; 

	printf("string1 is : %s\n", string1);
	
	int i;

	for ( i= 0; i < 30 && string1 [i] != '\0'; ++i) // when i=18, string[18]='\0'
	{ 
		printf("%c \n", string1[i]);
	}

	return 0;
}


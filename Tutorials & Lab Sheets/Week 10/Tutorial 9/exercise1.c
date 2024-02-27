//Tutorial 9 Exercise 1

//Practice to manipulate character arrays

#include <stdio.h>
#include <string.h>

int main() 
{
    char word[30]; // Assuming the word length is less than 30 characters
    int i;
    char palindrome = 'Y';	// Assume the word is a palindrome initially

    printf("Enter a word: ");
    scanf("%s", word);

    int length = strlen(word);	//strlen function used to get the size of array

    // Compare characters from the beginning and end of the word
    for (i = 0; i < length / 2; i++) 
	{
        if (word[i] != word[length - i - 1]) 
		{
            palindrome = 'N';	// Not a palindrome
            break; // No need to continue checking
        }
    }

    if (palindrome=='Y') 
	{
        printf("%s is a palindrome.\n", word);
    } 
	else 
	{
        printf("%s is not a palindrome.\n", word);
    }

    return 0;
}


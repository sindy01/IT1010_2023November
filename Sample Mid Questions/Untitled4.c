#include <stdio.h>

int main()
{
	char letter = 'S';
	
	letter == 'R' ? printf("Rat")
	: letter == 'S' ? printf("Snake")
	: letter == 'T' ? printf("Toad") : printf("Unexpected");

}

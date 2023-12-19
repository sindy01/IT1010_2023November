//Tutorial 3 Exercise 3

#include <stdio.h>

int main() 
{
    int i = 1, j = 2, k = 3, m = 2;
    
    printf( "%d", i == 1 );
    printf("\n");
    
	printf( "%d", j == 3 );
	printf("\n");
	
	printf( "%d", i >= 1 && j < 4 );
	printf("\n");
	
	printf( "%d", k + m < j || 3 - j >= k );
	printf("\n");
	
	printf( "%d", !m ); //Any nonzero value is considered as true in C language
	printf("\n");
	
	printf( "%d", !( j - m ) );
	printf("\n");
	
	/*
	0 says false 
	1 says true
	*/
    
    return 0;
}


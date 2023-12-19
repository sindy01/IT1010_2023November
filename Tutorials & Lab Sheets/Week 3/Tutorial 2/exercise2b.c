//Tutorial 2 Exercise 2b

#include <stdio.h>

int main() 
{
	printf( "%.2f\n", 123.4567);
	
	printf("%.3f\n", 3.14159);
	

	printf("%15.1f\n", 333.546372);
	printf("%15.2f\n", 333.546372);
	printf("%15.3f\n", 333.546372);
	printf("%15.4f\n", 333.546372);
	printf("%15.5f\n", 333.546372);
	
	return 0;
}

/*
%f for regular formatting

%.nf to specify a precision of n decimal places

%<width>f to set the field width

*/

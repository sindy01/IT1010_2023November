//Lecture 7 Example 0B

#include <stdio.h>

int main(void)
{
	int age[6] = {24,23,21,20,22,19};
	
	printf("%d\n", age[2]);
	printf("%d\n", age[3]+age[4]+age[5]);
	
	age[1] += 2;
	printf("%d\n",age[1]);
     	
	return 0;
}



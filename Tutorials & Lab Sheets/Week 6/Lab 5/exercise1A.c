//Lab 5 Exercise 1A

#include <stdio.h>

int main(void)
{
	int count = 1;
	
	while(count <= 20)
	{
		printf("%d\t", count);
		count += 2;	
		//count += 2; is same as count = count +2;
	}
	
	return 0;
}


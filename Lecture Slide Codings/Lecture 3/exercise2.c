//Lecture 3 Example 2 - Slide No. 9

#include <stdio.h>

int main()
{
	int no1 = 5, no2 =4;
	
	int Q1 = (no1 == -5);
	int Q2 = (no1 != no2);
	int Q3 = (no1 > ( no2 + 1 ));
	int Q4 = (no1 >= ( no2 + 1 ));
	int Q5 = (no1 <= 12);
	int Q7 = (no1 == no2);

	printf("%d",Q1);
	printf("\n\n");
	printf("%d",Q2);
	printf("\n\n");
	printf("%d",Q3);
	printf("\n\n");
	printf("%d",Q4);
	printf("\n\n");
	printf("%d",Q5);
	printf("\n\n");
	printf("%d",Q7);
	
	return 0;
}

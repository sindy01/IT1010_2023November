//Lecture 3 Example 5 - Slide No. 15 
//Q3

#include <stdio.h>

int main()
{
	int no = 10;
	int x = 5;
	
	printf("%d\n",  ++x);	//Print 6
	printf("%d\n",  x);		//Print 6
	
	/* 
	Prefix Increment
	Lets say y = ++x 
	First x = x + 1, that is x = 5 + 1 = 6
	Then y = x , that is y = 6
	*/
	
	return 0;
}

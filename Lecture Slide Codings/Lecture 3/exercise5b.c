//Lecture 3 Example 5 - Slide No. 15 
//Q2

#include <stdio.h>

int main()
{
	int no = 10;
	int x = 5;
	
	printf("%d\n",  x++);	//Print 5
	printf("%d\n",  x);		//Print 6
	
	/* 
	Postfix Increment
	Lets say y = x++ 
	First y = x , that is y = 5
	Then x = x + 1, that is x = 5 + 1 = 6
	*/
	
	return 0;
}

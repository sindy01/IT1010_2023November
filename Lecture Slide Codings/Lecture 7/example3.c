//Lecture 7 Example 3 - Slide 9
//Initializing the elements of an array to zero

#include <stdio.h>

int main(void)
{
	int n[5]= {10,20};	//n[0]=10,n[1]=20,n[2]=0,n[3]=0,n[4]=0
	/* When you initialize an array with fewer elements 
	than its size, the remaining elements are automatically 
	initialized to zero. */
	
	int i;

	printf("%s%13s\n",  "Element",  "Value");

	//output contents of array n in a tabular format
	for( i = 0; i < 5; ++i)
     	printf("%7d%13d\n", i , n[i]); 
    
	return 0;
}


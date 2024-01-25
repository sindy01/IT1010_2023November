//Lecture 7 Example 2 - Slide 8
//Initializing the elements of an array using an initializer list 

#include <stdio.h>

int main(void)
{
	int n[5]= {5, 12, 34, 56, 23};	//n[0]=5,n[1]=12,n[2]=34,n[3]=56,n[4]=23
	int i;

	printf("%s%13s\n",  "Element",  "Value");

	//output contents of array n in a tabular format
	for( i = 0; i < 5; ++i)
     	printf("%7d%13d\n", i , n[i]); 
    
	return 0;
}


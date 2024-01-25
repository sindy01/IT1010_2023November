//Lecture 7 Example 10 - Slides 17,18
//Passing Arrays to Functions

# include <stdio.h>
# define SIZE 5

void modifyArray(int b[], int size);

int main (void)
{
    int a[SIZE]  = { 0, 1, 2, 3, 4};
    
    int  i; // counter
    
	//output original array
	for( i = 0; i < SIZE; ++i)
     	printf("%3d", a[i]);	//width 3
	
	puts(" ");

    modifyArray(a, SIZE);
    
    // output modified array
	for( i = 0; i < SIZE; ++i)
     	printf("%3d", a[i]);	//width 3
    
    return 0;
} 

void modifyArray( int b[], int size)
{
	int  j;
	
	// multiply each array element by 2
	for( j  = 0; j < size; ++j)
     	b[j] *= 2; 	//b[j] = b[j] * 2;
}




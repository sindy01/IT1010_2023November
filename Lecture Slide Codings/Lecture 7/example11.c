//Lecture 7 Example 11 - Slide 21
//Initializing 2D Arrays

# include <stdio.h>
 
int  main(void)
{
	int array1[2][3] = {{1,2,3},{4,5,6}}; 
	
 	int array2[2][3] = {1,2,3,4,5};		//SAME AS {1,2,3,4,5,0} OR {{1,2,3},{4,5,0}}
 	
	int array3[2][3] = {{1,2},{4}};		//SAME AS {1,2,0,4,0,0} OR {{1,2,0},{4,0,0}}
	
	int i,j;

	for(i = 0; i <= 1; ++i)
	{
     	for(j = 0; j <= 2; ++j)
     	    printf("%d\n", array1[i][j]); 
        printf("\n");         
    }

	for( i = 0; i <= 1; ++i)
	{
	    for(j = 0; j <= 2; ++j)
	     	printf("%d\n", array2[i][j]); 
	    printf("\n");
	}
	
	for(i = 0; i <= 1; ++i)
	{
	    for(j = 0; j <= 2; ++j)
	     	printf("%d\n", array3[i][j]); 
	    printf("\n");
	}
	
	return 0;
}



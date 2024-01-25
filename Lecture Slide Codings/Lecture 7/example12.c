//Lecture 7 Example 12 - Slide 23
//Summing the Elements of a 2D Array

# include<stdio.h>

int  main(void)
{
    int row,column;
    int a[2][3];		//Define an integer array with 2 rows & 3 columns
    int total = 0;
    
	for(row = 0; row <=1; ++row)	//Loop through the rows
	{
     	for(column = 0; column <= 2; ++column)	//Loop through the columns
		{
     	    printf("\n a[%d][%d] = ", row, column);  
            scanf("%d", &a[row][column]);
		}
	}
	
    for(row = 0; row <=1; ++row)
    {
     	for(column = 0; column <= 2; ++column)
			total += a[row][column]; 	//total = total + a[row][column];
	}
	
	printf("\nThe total of the elements of the array : %d", total);
	
   	return 0;
}


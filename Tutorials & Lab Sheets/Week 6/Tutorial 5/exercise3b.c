//Tutorial 5 Exercise 3 (ii)

//Practice to use loops (Use while loop)

#include <stdio.h>

int main() 
{
	int mark;
    
    int student = 1;
	
	while (student<=3)   
	{
		int count = 1;
    	int total = 0;
    	
    	printf("Student %d :\n\n", student);
    
		while (count <= 4) 
		{
	        printf("Enter marks for module %d :", count);
	    	scanf("%d", &mark);
	    	
	    	total = total + mark;
			count++;				//count = count + 1;
    	}
    	
    	printf("\nTotal marks of Student %d : %d\n\n", student, total);
    	student++;					//student = student + 1;
		
	}
    
    return 0;
}


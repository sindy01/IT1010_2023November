//Tutorial 5 Exercise 3 (i)

//Practice to use loops (Use while loop)

#include <stdio.h>

int main() 
{
	int mark;
    int count = 1;
    int total = 0;
       
    while (count <= 4) 
	{
        printf("Enter marks for module %d :", count);
    	scanf("%d", &mark);
    	
    	total = total + mark;
		count++;				// count = count + 1;
    }
    
    printf("Total marks: %d\n", total);
    
    return 0;
}


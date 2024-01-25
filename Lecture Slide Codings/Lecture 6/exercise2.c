//Lecture 6 Exercise 2 - Slide 16
//Function to determine and return the largest of two integers

# include <stdio.h>
int max(int a, int b);

int main ( void )
{
	int number1, number2;
	printf("Enter the first number : ");
	scanf("%d",&number1);
	printf("Enter the second number : ");
	scanf("%d",&number2);
    
    int maximumNumber = max(number1,number2);
    
    printf("The largest number is : %d",maximumNumber);
    
    return 0;
}

int max(int a, int b) 
{
	int maximum;
	if (a>b)
	{
		maximum = a;
	}
	else
	{
		maximum = b;
	}
	
	return maximum;
}

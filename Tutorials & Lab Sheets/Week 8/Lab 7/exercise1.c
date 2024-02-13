//Lab 7 Exercise 1

//Implement simple functions in C language
//Write assert statements to test user defined functions

#include <stdio.h> 
#include <assert.h>

//Function declarations
char findGrade(float mark);  
void testGrade();

int main(void)
{
	testGrade();
	float mark;
	printf("Enter mark of the module : "); 
	scanf("%f", &mark);
	printf("Grade = %c\n", findGrade(mark)); 
	return 0;
}

//Function implementation
char findGrade(float mark) 
{
	if(mark >= 75)
		return 'A'; 
	else if(mark >= 65)
		return 'B'; 
	else if(mark >= 45)
		return 'C';
	else
		return 'F';
}

void testGrade()
{
	assert(findGrade(85) == 'A'); 
	assert(findGrade(25) == 'F');
}


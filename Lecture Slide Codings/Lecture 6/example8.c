//Lecture 6 Example 8 - Slide 31,32,33,34
//Assert

# include <stdio.h>
# include <assert.h>

char grade(int marks);
void test_grade();

int main(void) 
{
   test_grade();
   return 0;
}



char grade(int marks) 
{
   char result;
   
   if (marks < 0)	// Error (invalid mark)
      result = 'X';
   if (marks < 40)
      result = 'F';
   else if (marks < 60)
      result = 'C';
   else if (marks < 75)
      result = 'B';
   else if (marks <= 100)
      result = 'A';
   else				// marks > 100
      result = 'X'; // Error (invalid mark)
    
	return result;
}


void test_grade() 
{
   assert(grade(20) == 'F');
   assert(grade(50) == 'C');
   assert(grade(70) == 'B');
   assert(grade(78) == 'A');
   assert(grade(-10) == 'X');
   assert(grade(110) == 'X');
   // boundary conditions
   assert(grade(0) == 'F');
   assert(grade(40) == 'C');
   assert(grade(60) == 'B');
   assert(grade(75) == 'A');
   assert(grade(100) == 'A');
   
   printf("grade() unit tests passed\n");
}


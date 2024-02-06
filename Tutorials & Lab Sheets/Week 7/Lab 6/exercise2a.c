//Lab 6 Exercise 2a

/*This program uses a function called calBonus() to calculate 
the bonus amount of an employee based on the basic salary.*/

#include <stdio.h>

float calBonus(float basicSal);	//Function declaration

int main(void)
{
	float salary, netSalary, bonusAmount;
	
	printf("Enter basic salary : ");
	scanf("%f", &salary);
	
	bonusAmount = calBonus(salary);
	netSalary = salary - bonusAmount;
	
	printf("Net salary : %.2f\n", netSalary);
	return 0;
}


float calBonus(float basicSal)	//Function implementation
{
	float bonus;
	if(basicSal > 20000)
	{
		bonus = basicSal * 2;
	}
	else
		bonus = basicSal / 2;
	return bonus;
}

//Lab 3 Exercise 1

//This program calculate discount and final payment of a customer

#include <stdio.h>

int main(void)
{
	double totalPay, finalPay, discount;
	
	printf("Enter total payment of a customer : ");
	scanf("%lf", &totalPay);
	
	discount = totalPay * (15 / 100);
	
	finalPay = totalPay + discount;
	
	printf("Discount : %.2f\n" , discount);
	printf("Final Payment : %.2f\n" , finalPay);
	
	return 0;
}




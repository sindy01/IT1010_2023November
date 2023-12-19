//Lab 2 Exercise 1
/*This program calculates the overall score using given the points earned for the exam and homework*/

#include <stdio.h>

int main()
{
	int examScore, homeworkScore;
	float score1, score2, overallScore;
	
	printf("Please enter the points earned for the exam : ");
	scanf("%d", &examScore);
	
	printf("Please enter the points earned for homework: ");
	scanf("%d", &homeworkScore);
	
	score1 = examScore * 50 / 100.0;
	score2 = homeworkScore * 50 / 100.0;
	overallScore = (score1 + score2)/2; //overallScore = score1 + score2;
	
	printf( "Overall course score is %.2f", overallScore );
	
	return 0;
}




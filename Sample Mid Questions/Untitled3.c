#include <stdio.h>

int main()
{
	int choice;

	printf("Enter your choice : ");
	scanf("%d", &choice);

	switch(choice)
	{
	  case 6 : printf("Six\n");
	    break;
	  case 7 : printf("Seven\n");
	    break;
	  case 8 : printf("Eight\n");
	  case 9 : printf("Nine\n");
	    break;
	  default : printf("Unexpected\n");
	}

}



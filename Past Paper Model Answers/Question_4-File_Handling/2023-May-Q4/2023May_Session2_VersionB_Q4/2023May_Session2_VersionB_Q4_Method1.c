#include <stdio.h>

int main() 
{
  FILE *fp;
  char movie;
  char ticket_type;
  int number_of_tickets;
  int i;

  // Open the data file for writing.
  fp = fopen("purchases.dat", "w");
  if (fp == NULL) 
  {
    printf("Error opening data file.\n");
    return -1;
  }

  // Prompt the user to enter the details of 5 purchases.
  for (i = 0; i < 5; i++) 
  {
    printf("Enter the movie (H/F/S): ");
    scanf(" %c", &movie);

    printf("Enter the ticket type (B/N): ");
    scanf(" %c", &ticket_type);

    printf("Enter the number of tickets: ");
    scanf("%d", &number_of_tickets);

    // Write the purchase details to the data file.
    fprintf(fp, "%c %c %d\n", movie, ticket_type, number_of_tickets);
  }

  // Close the data file.
  fclose(fp);

  	int HB_count=0,HN_count=0,FB_count=0,FN_count=0,SB_count=0,SN_count=0;
	
	fp=fopen("purchases.dat","r");
	if (fp == NULL) 
  	{
    	printf("Error opening data file.\n");
    	return -1;
  	}
  	
	fscanf(fp," %c %c %d",&movie,&ticket_type,&number_of_tickets);
	
	while(!feof(fp))
	{
		switch(movie)
		{
			case 'H':
				if(ticket_type == 'B')
				{
					HB_count = HB_count + number_of_tickets;
				}
				else if(ticket_type == 'N')
				{
					HN_count = HN_count + number_of_tickets;		
				}
				break;
				
			case 'F':
				if(ticket_type == 'B')
				{
					FB_count = FB_count + number_of_tickets;
				}
				else if(ticket_type == 'N')
				{
					FN_count = FN_count + number_of_tickets;	
				}
				break;
				
			case 'S':
				if(ticket_type == 'B')
				{
					SB_count = SB_count + number_of_tickets;
				}
				else if(ticket_type == 'N')
				{
					SN_count = SN_count + number_of_tickets;			
				}
				break;				
		}
		
		fscanf(fp," %c %c %d",&movie,&ticket_type,&number_of_tickets);
	}
	
	fclose(fp);
	
	printf("Harry Portor \n");
	printf("     Balcony  -%d \n",HB_count);	
	printf("     Normal   -%d \n",HN_count);	
	printf("Frozon-II \n");
	printf("     Balcony  -%d \n",FB_count);	
	printf("     Normal   -%d \n",FN_count);	
	printf("Sherlock Homes \n");
	printf("     Balcony  -%d \n",SB_count);	
	printf("     Normal   -%d \n",SN_count);

  	return 0;
}


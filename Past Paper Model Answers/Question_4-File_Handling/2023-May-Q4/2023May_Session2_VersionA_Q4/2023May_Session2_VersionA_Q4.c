#include<stdio.h>

int main(void)
{
	char Customer_Name[20];
	char file_Customer_Name[20];
	int  Customer_ID;
	int  file_Customer_ID;
	int Telephone_number;
	int file_Telephone_number;
	int i;
	
	for (i=1; i<4; i++)
	{
	
		FILE *cfptr;
		
		cfptr=fopen("customers.dat","a+"); //read and append
		
		if(cfptr==NULL)
		{
			printf("file is not found\n");
			return 1;
		}
					
		printf("Enter the Customer ID : ");
		scanf("%d",&Customer_ID);
			
		printf("Enter the Customer Name : ");
		scanf("%s",&Customer_Name);
			
		printf("Enter the Telephone number : ");
		scanf("%d",&Telephone_number);
			        
		while( !feof(cfptr))
		{
			fscanf(cfptr,"%d %s %d",&file_Customer_ID,&file_Customer_Name,&file_Telephone_number);
			if(Customer_ID == file_Customer_ID) 
			{
				printf("Customer ID already exists in file\n");
				i--;
				break;			
			}
			
		}	
			
		fprintf(cfptr,"%d %s %d\n",Customer_ID,Customer_Name,Telephone_number);
			       
		fclose(cfptr);
		    
	}
		    	    
	return 0;
}

#include<stdio.h>
#include<string.h>

int main(void)
{
	int item_code;
	char item_name[20];
	char search_item_name[20];
	int i;
	int counter = 0;
	
	FILE *cfptr;
	
	cfptr=fopen("Items.dat","w");
	
	if(cfptr==NULL)
	{
		printf("Couldn't open the file.\n");
		return 1;
	}
	
	for(i=1; i<=5; i++)
	{
		printf("Enter the item code : ");
		scanf("%d",&item_code);
		
		printf("Enter the Name : ");
		scanf("%s",&item_name);
		
		fprintf(cfptr,"%d %s\n",item_code,item_name); //Write in Items.dat file
	}
	
	fclose(cfptr);
	
	//Read from Items.dat file
	cfptr=fopen("Items.dat","r");

	printf("\n\nEnter the item name to search from file:");
	scanf("%s",&search_item_name);
	
	int search_name_length=strlen(search_item_name);
	
	fscanf(cfptr,"%d %s",&item_code,&item_name);
	
	while(!feof(cfptr))
	{
		int item_length=strlen(item_name);
		
		if(item_length == search_name_length)
		{
			for(i=0;i<search_name_length;i++)
			{
				if(item_name[i]==search_item_name[i])
				{
					counter++;
				}
			}
		}
	   
	   if (counter == item_length)
	   {
	   		printf("Item code of %s is %d \n",item_name,item_code);
	   		return 1;
	   }
		
		
		fscanf(cfptr,"%d %s",&item_code,&item_name);
	}
	
	printf("Entered item name does not exist in Items.dat file");
	
	fclose(cfptr);
	
	return 0;
}

#include <stdio.h>
#include <strings.h>

int main() 
{
    FILE *file = fopen("Directory.dat", "w");
    
    if (file == NULL) 
	{
        printf("Error opening file for writing.\n");
        return 1;
    }

    char name[10];
    int telephone;
    char search_name[10];
    int i;
    int counter = 0;

    for (i = 1; i <= 5; i++) 
	{
		printf("Person %d \n",i);
        printf("Enter name : ");
        scanf("%s", &name);
		printf("Enter telephone number : ");
		scanf("%d", &telephone);
		
        fprintf(file, "%s %d\n", name,telephone);
      
    }
    
    printf("\n\n");

    fclose(file);


    file = fopen("Directory.dat", "r");
    
    if (file == NULL) 
	{
        printf("Error opening file for reading.\n");
        return 1;
    }
    
    printf("Enter the person name to search from file: ");
    
	scanf("%s",&search_name);
	
	int search_name_length=strlen(search_name);
	
	fscanf(file,"%s %d",&name,&telephone);
	
	while(!feof(file))
	{
		int name_length=strlen(name);
		
		if(name_length == search_name_length)
		{
			for(i=0;i<search_name_length;i++)
			{
				if(name[i]==search_name[i])
				{
					counter++;
				}
			}
		}
	   
	   if (counter == name_length)
	   {
	   		printf("Telephone number of %s is %d \n",name,telephone);
	   		return 1;
	   }
		
		
		fscanf(file,"%s %d",&name,&telephone);
	}
	
	printf("Entered person name does not exist in Directory.dat file");
   
    fclose(file);

    return 0;
}


//Tutorial 10 Exercise 2

//Practice to write data to a text file

#include <stdio.h>

int main() 
{
    FILE *app;
    
    char patientName[20];
    char appointmentType;
    int consultingCount = 0, scanningCount = 0, testingCount = 0;
    
    // Create the file "appointment.dat" for writing
    app = fopen("appointment.dat", "w");

    if (app == NULL) 
	{
        printf("Error creating the file.\n");
        return 1;
    }

    // Input patient details and write to the file
    printf("Enter patient details:\n\n");

	int i;
    for (i = 0; i < 5; i++) 
	{
        printf("Patient Name: ");
        scanf("%s", &patientName);

        printf("Appointment Type (C for Consulting, S for Scanning, T for Testing): ");
        scanf(" %c", &appointmentType);

        // Check if the input is valid (C, S, or T)
        if (appointmentType != 'C' && appointmentType != 'S' && appointmentType != 'T') 
		{
            printf("Invalid appointment type. Please enter C, S, or T.\n");
            i--; // Decrement i to repeat the input for this patient
            continue;
        }

        // Write patient data to the file
        fprintf(app, "%s\t%c\n", patientName, appointmentType);
    }

    // Close the file
    fclose(app);
    
    // Open the file "appointment.dat" for reading
    app = fopen("appointment.dat", "r");

    if (app == NULL) 
	{
        printf("Error opening the file for reading.\n");
        return 1;
    }
    
    fscanf(app, "%s %c", patientName, &appointmentType);	// read from file

    // Read and count patient appointments
    while(!feof(app))
	{
        switch (appointmentType)
		{
            case 'C':
                consultingCount++; //consultingCount = consultingCount +1;
                break;
            case 'S':
                scanningCount++;
                break;
            case 'T':
                testingCount++;
                break;
        }
        
        fscanf(app, "%s %c", patientName, &appointmentType);	// Read from file
    }

    // Close the file
    fclose(app);

    // Display the number of patients for each appointment type
    printf("\nAppointment Type\tNumber of Patients\n");
    printf("Consulting\t\t%d\n", consultingCount);
    printf("Scanning\t\t%d\n", scanningCount);
    printf("Testing\t\t\t%d\n", testingCount);
    
    return 0;
}


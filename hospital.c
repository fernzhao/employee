

#include "stdio.h"
#include "stdlib.h"
#include "struct.h"
#include "string.h"
#include "populateRecords.h"
#include "patient.h"
#include "employee.h"

#define NUM_RECORDS 20
int menu();
int quit();

int menu(){
	char select[0];
	while(1){
	printf("1.Print all employees\n");
	printf("2.Print all patients\n");
	printf("3.Search patient using Family Name\n");
	printf("4.Summary of Employees Data\n");
	printf("5.Summary of Patients data\n");
	printf("6.Size of structures\n");
	printf("0.Quit\n");
	scanf("%s",select);
	if(strlen(select)==1){
		if(select[0]>=48 && select[0]<=54){
			return (int)select[0]-48;
		}
	}
	printf("it is invalid,Please try again\n\n");
	}
}



int main()
{
	struct person person[NUM_RECORDS];
		//char rc = 0;


    // populating the array person with data of patients and employees
    populateRecords(person, NUM_RECORDS);

    // add code here
    //
	int index;
	while(1){
		index=menu();
		switch(index){
			case 0: 
				if(quit()==0){
					return 0;
				}
				else{
					break;
				}
			case 1:printEmployees(person,NUM_RECORDS);
				break;
			case 2:printPatients(person,NUM_RECORDS);
				break;
			case 3:searchPatient(person,NUM_RECORDS);
				break;
			case 4:printEmployeesSummary(person,NUM_RECORDS);
				break;
			case 5:printPatientSummary(person,NUM_RECORDS);
				break;
			case 6: printf("Size of Structures\n");
				printf("Size of PersonRrec=%d\n",sizeof(PersonRec));
				printf("Size of EmployeeRrec=%d\n",sizeof(EmployeeRec));
				printf("Size of PatientRrec=%d\n",sizeof(PatientRec));
				break;

		}
	}
    
	//return 0;
}

int quit(){
	printf("Do you want to quit?(y or n)\n");
	//int choice;

	char select[1000];
	scanf("%s",select);
	if(strlen(select)==1){
		if(select[0]==121){
			return 0;
			}
		else if(select[0]==110){
			return 1;
			}
		else{
			quit();
		}
	}
	else{
		quit();
}
return 1;
}




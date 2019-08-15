

#include "string.h"
#include "stdio.h"
#include "patient.h"

/********************************************************************/
void printPatient(PersonRec person)

{
	char name[NAME_SIZE];
	int totalcost=(person.patient.numDaysInHospital)*(person.patient.dailyCost);
	sprintf(name,"%s%s",person.firstName,person.familyName);
	printf("%-33s dept:%3d, numDaysInHospital:%5d, severity:%2d, dailyCost: %6d, total cost:%d",name,person.patient.department,person.patient.numDaysInHospital,person.patient.severity,person.patient.dailyCost,totalcost);
    // add code
	printf("\n");

    // add code 

}

/********************************************************************/
void printPatients(PersonRec *person, int numRecords)
{
	for(int i=0; i<numRecords;i++){
		if(person[i].emplyeeOrPatient==0){
			printPatient(person[i]);
		}
	}
    // add code 

}


/********************************************************************/
void printPatientSummary(PersonRec *person, int numRecords)
{
	printf("patients Summary\n");
	int num=0;
	float totalDate=0.0;
	float totalavg=0.0;
	for(int i=0; i<numRecords;i++){
		if(person[i].emplyeeOrPatient==0){
			totalDate+=(person[i].patient.numDaysInHospital)*(person[i].patient.dailyCost);
			num++;
			totalavg=(person[i].patient.numDaysInHospital)*(person[i].patient.dailyCost)/num;
		}
	}
	printf("total number of patient:%2d  total cost to-date:%.2f average daily cost per patient:%.2f\n",num,totalDate,totalavg);
    
// add code 
	for(int i=1;i<7;i++){
		SummaryDepartment(person,numRecords,i);
}
}
void SummaryDepartment(PersonRec *person, int numRecords, int dept){
	int num=0;
	float totalDate=0.0;
	//int dept=department;
	float totalavg=0.0;
	int totaldaily=0;
	for(int i=0;i<numRecords;i++){
		if(person[i].emplyeeOrPatient==1){
			if(person[i].patient.department==dept){
				totalDate+=(person[i].patient.numDaysInHospital)*(person[i].patient.dailyCost);
				totaldaily+=person[i].patient.dailyCost;
			num++;
			totalavg=(person[i].patient.dailyCost)/num;
			}
		}
	}
	printf("Department[%d] total number of patient:%2d total cost to-date:%.2f daily cost:%2d average daily cost per patient:%.2f\n",dept,num,totalDate,totaldaily,totalavg);
}



/********************************************************************/
void searchPatient(PersonRec *person, int numRecords)

{
	int count=0;
	char familyName[NAME_SIZE];
	printf("please enter the last name:");
	scanf("%s",familyName);
	for(int i=0; i<numRecords;i++){

		if(person[i].emplyeeOrPatient==1){
			if(strcmp(person[i].familyName,familyName)==0){
			
				printPatient(person[i]);
				
			}
		}
	
		
	}
	if(count==0){
		printf("there are no information about this person\n");
	}
}



    // add code 



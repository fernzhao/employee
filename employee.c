#include "employee.h"
#include "stdio.h"

void printEmployee(PersonRec person)

{
	char name[NAME_SIZE];
	float todate=(person.emp.yearsService)*(person.emp.salary);
	sprintf(name,"%s%s",person.firstName,person.familyName);
	printf("%-33s dept:%3d, salary:%.2f, position:%2d, years of service: %6d, salary to-date:%.2f",name,person.emp.department,person.emp.salary,person.emp.position,person.emp.yearsService,todate);
    // add code
	printf("\n");

}

void printEmployees(PersonRec *person, int numRecords)
{
	for(int i=0; i<numRecords;i++){
		if(person[i].emplyeeOrPatient==0){
			printEmployee(person[i]);
		}
	}
    // add code

}


void printEmployeesSummary(PersonRec *person, int numRecords)
{
	printf("Employees Summary\n");
	//int totalemp=0;
	float totalSalary=0.0;
	int num=0;
	float avgSalary=0.0;
	for(int i=0; i<numRecords;i++){
		if(person[i].emplyeeOrPatient==0){
			totalSalary+=person[i].emp.salary;
			num++;
			avgSalary=totalSalary/num;
    		}
	}
	printf("total of Employee:%2d total salary:%.2f avg salary:%.2f\n",num,totalSalary,avgSalary);
	for(int i=0;i<4;i++){
		SummaryPosition(person,numRecords,i);
	}
}

void SummaryPosition(PersonRec *person, int numRecords, int position){
	int num=0;
	float totalSalary=0.0;
	int pos=position;
	float avgSalary=0.0;
	for(int i=0;i<numRecords;i++){
		if(person[i].emplyeeOrPatient==0){
			if(person[i].emp.position==position){
				num++;
				totalSalary+=person[i].emp.salary;
				avgSalary=totalSalary/num;
			}
		}
	}
	printf("position[%d] number of employees:%2d total salary:%.2f average salary:%.2f\n",pos,num,totalSalary,avgSalary);
}



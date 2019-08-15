# employee

1.Purpose of software:create a program for manipulating records of patients and employees in hospital.
2.student name:feifeizhao date: March 6,2018.
  student number: 101047476

3.
File name:
hospital.c
employee.c
employee.h
patient.c
patient.h
populateRecords.c
populateRecords.h
struct.h
 
gcc -Wall -o hospital hospital.c employee.c patient.c populateRecords.c
  
 ./hospital
4.


1.Print all employees
2.Print all patients
3.Search patient using Family Name
4.Summary of Employees Data
5.Summary of Patients data
6.Size of structures
0.Quit

1
DonSmith                          dept:  5, salary:245790.84, position: 3, years of service:     17, salary to-date:4178444.25
DavidJohnson                      dept:  4, salary:368514.75, position: 1, years of service:     17, salary to-date:6264751.00
JenniferSmith                     dept:  3, salary:400039.59, position: 3, years of service:     42, salary to-date:16801662.00
JaneCarp                          dept:  3, salary:369961.94, position: 1, years of service:      9, salary to-date:3329657.50
JustinFarmer                      dept:  4, salary:264356.53, position: 0, years of service:     52, salary to-date:13746540.00
JenniferCarp                      dept:  4, salary:134730.30, position: 2, years of service:     39, salary to-date:5254481.50
JohnMart                          dept:  1, salary:363256.59, position: 2, years of service:     25, salary to-date:9081415.00
JustinOuster                      dept:  5, salary:197970.27, position: 2, years of service:      2, salary to-date:395940.53
JenniferSmith                     dept:  5, salary:98244.78, position: 0, years of service:      1, salary to-date:98244.78
JustinMart                        dept:  6, salary:146650.94, position: 0, years of service:     43, salary to-date:6305990.50
1.Print all employees
2.Print all patients
3.Search patient using Family Name
4.Summary of Employees Data
5.Summary of Patients data
6.Size of structures
0.Quit
aaa
it is invalid,Please try again

1.Print all employees
2.Print all patients
3.Search patient using Family Name
4.Summary of Employees Data
5.Summary of Patients data
6.Size of structures
0.Quit

2
DonSmith                          dept:  7, numDaysInHospital:    2, severity: 0, dailyCost:     40, total cost:80
DavidJohnson                      dept:  5, numDaysInHospital:   18, severity: 0, dailyCost:      8, total cost:144
JenniferSmith                     dept:  3, numDaysInHospital:    5, severity: 2, dailyCost:     53, total cost:265
JaneCarp                          dept:  5, numDaysInHospital:   25, severity: 2, dailyCost:     36, total cost:900
JustinFarmer                      dept:  0, numDaysInHospital:   10, severity: 0, dailyCost:     26, total cost:260
JenniferCarp                      dept:  6, numDaysInHospital:    2, severity: 2, dailyCost:     19, total cost:38
JohnMart                          dept:  6, numDaysInHospital:   28, severity: 0, dailyCost:     44, total cost:1232
JustinOuster                      dept:  2, numDaysInHospital:   10, severity: 3, dailyCost:     33, total cost:330
JenniferSmith                     dept:  4, numDaysInHospital:   30, severity: 2, dailyCost:     32, total cost:960
JustinMart                        dept:  4, numDaysInHospital:   27, severity: 2, dailyCost:     21, total cost:567
1.Print all employees
2.Print all patients
3.Search patient using Family Name
4.Summary of Employees Data
5.Summary of Patients data
6.Size of structures
0.Quit
3
please enter the last name:Smith
JustinSmith                       dept:  5, numDaysInHospital:   18, severity: 2, dailyCost:     39, total cost:702
there are no information about this person
1.Print all employees
2.Print all patients
3.Search patient using Family Name
4.Summary of Employees Data
5.Summary of Patients data
6.Size of structures
0.Quit
4
Employees Summary
total of Employee:10 total salary:2589516.50 avg salary:258951.66
position[0] number of employees: 3 total salary:509252.25 average salary:169750.75
position[1] number of employees: 2 total salary:738476.69 average salary:369238.34
position[2] number of employees: 3 total salary:695957.12 average salary:231985.70
position[3] number of employees: 2 total salary:645830.44 average salary:322915.22
1.Print all employees
2.Print all patients
3.Search patient using Family Name
4.Summary of Employees Data
5.Summary of Patients data
6.Size of structures
0.Quit
5
patients Summary
total number of patient:10  total cost to-date:4776.00 average daily cost per patient:56.00
Department[1] total number of patient: 1 total cost to-date:810.00 daily cost:27 average daily cost per patient:27.00
Department[2] total number of patient: 2 total cost to-date:1212.00 daily cost:70 average daily cost per patient:11.00
Department[3] total number of patient: 2 total cost to-date:1130.00 daily cost:67 average daily cost per patient:17.00
Department[4] total number of patient: 1 total cost to-date:264.00 daily cost:22 average daily cost per patient:22.00
Department[5] total number of patient: 3 total cost to-date:1884.00 daily cost:111 average daily cost per patient:12.00
Department[6] total number of patient: 1 total cost to-date:117.00 daily cost: 9 average daily cost per patient:9.00
1.Print all employees
2.Print all patients
3.Search patient using Family Name
4.Summary of Employees Data
5.Summary of Patients data
6.Size of structures
0.Quit
6
Size of Structures
Size of PersonRrec=40
Size of EmployeeRrec=8
Size of PatientRrec=4
1.Print all employees
2.Print all patients
3.Search patient using Family Name
4.Summary of Employees Data
5.Summary of Patients data
6.Size of structures
0.Quit
0
Do you want to quit?(y or n)
n
1.Print all employees
2.Print all patients
3.Search patient using Family Name
4.Summary of Employees Data
5.Summary of Patients data
6.Size of structures
0.Quit
0
Do you want to quit?(y or n)
y

5.
no warming in this program,no issue in this program

6. First complile the program use 
gcc -Wall -o hospital hospital.c employee.c patient.c populateRecords.c 
and run this program use ./hospital
it will display a list enter a number of (0-6),to find a source you want to look at.




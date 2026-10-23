/*Write a C program to store an employee’s details such as Employee ID, Employee Name,
 and Basic Salary using pointers and display the details along with the annual salary.*/

#include <stdio.h>

int main()
{
    int empId;
    float salary;

    char empName[50];

    // Pointer declarations
    int *idPtr = &empId;
    float *salaryPtr = &salary;

    // Input employee details
    printf("Enter Employee ID: ");
    scanf("%d", idPtr);

    printf("Enter Employee Name: ");
    scanf("%s", empName);

    printf("Enter Monthly Salary: ");
    scanf("%f", salaryPtr);

    // Calculate annual salary
    float annualSalary = (*salaryPtr) * 12;

    // Display details
    printf("\n===== EMPLOYEE DETAILS =====\n");
    printf("Employee ID      : %d\n", *idPtr);
    printf("Employee Name    : %s\n", empName);
    printf("Monthly Salary   : %.2f\n", *salaryPtr);
    printf("Annual Salary    : %.2f\n", annualSalary);

    return 0;
}

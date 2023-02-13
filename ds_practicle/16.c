#include <stdio.h>

// Structure definition for employee details
struct employee
{
    int empID;
    char empName[50];
    char fname[50];
    int age;
    char deptt[50];
    char phNumber[50];
};

int main()
{
    struct employee emp;

    // Input employee details
    printf("Enter employee ID: ");
    scanf("%d", &emp.empID);

    printf("Enter employee name: ");
    scanf("%s", emp.empName);

    printf("Enter employee's father's name: ");
    scanf("%s", emp.fname);

    printf("Enter employee age: ");
    scanf("%d", &emp.age);

    printf("Enter employee department: ");
    scanf("%s", emp.deptt);

    printf("Enter employee phone number: ");
    scanf("%s", emp.phNumber);

    // Print employee details
    printf("\nEmployee details:\n");
    printf("ID: %d\n", emp.empID);
    printf("Name: %s\n", emp.empName);
    printf("Father's name: %s\n", emp.fname);
    printf("Age: %d\n", emp.age);
    printf("Department: %s\n", emp.deptt);
    printf("Phone number: %s\n", emp.phNumber);

    return 0;
}

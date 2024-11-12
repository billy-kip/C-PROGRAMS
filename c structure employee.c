// c structures for employee
#include <stdio.h>
#include <string.h>
struct employee{
    char name[25];
    int ID;
    char department[20];
    float salary;
    char email[50];
}employee;

int main() {
    strcpy(employee.name,"John Doe");
    strcpy(employee.department,"human resources");
    strcpy(employee.email,"john.doe@company.com");
    employee.ID=12345;
    employee.salary=55000.50;

    printf("name:%s\n",employee.name);
    printf("department:%s\n",employee.department);
    printf("email:%s\n",employee.email);
    printf("ID:%d\n",employee.ID);
    printf("salary:%f\n",employee.salary);


    return 0;
}

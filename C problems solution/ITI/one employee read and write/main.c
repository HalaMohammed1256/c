#include <stdio.h>
#include <stdlib.h>



struct Employee{
    int id;
    char name[10];
    float salary;
    float commission;
    float deduction;
    int age;
};

int main()
{
    ///1- One Employee Read And Write with netsalary
    char redo = 'y';
    struct Employee employee1;
    do{
        printf("Please enter the employee id: ");
        scanf("%d",&employee1.id);

        printf("Please enter the employee name: ");
        _flushall();
        scanf("%s",&employee1.name);

        printf("Please enter the employee salary: ");
        scanf("%f",&employee1.salary);

        printf("Please enter the employee commission: ");
        scanf("%f",&employee1.commission);

        printf("Please enter the employee deduction: ");
        scanf("%f",&employee1.deduction);

        float netsalary = employee1.salary + employee1.commission - employee1.deduction;
        printf("\nEmployee Details:\nID: %d\nName: %s\nSalary: %.3f\nCommission: %.3f\nDeduction: %.3f\nNetsalary: %.3f",employee1.id, employee1.name, employee1.salary, employee1.commission, employee1.deduction,netsalary);

        printf("\n\nDo you want to redo the task? (y|n):  ");
        _flushall();
        scanf("%c",&redo);
        printf("\n");

    }while(redo == 'y' || redo == 'Y');
    return 0;
}

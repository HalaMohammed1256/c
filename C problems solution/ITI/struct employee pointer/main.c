#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Employee{
    int id;
    char name[10];
    float salary;
    float commission;
    float deduction;
};


int main()
{
    ///1-pointer of Struct Employee points variable of employee use -> (*var).

    char emp_name[10], redo = 'y';
    struct Employee *employee, emp;
    employee = &emp;

    do{
        printf("Please enter the employee id: ");
        scanf("%d",&employee->id);

        printf("Please enter the employee name: ");
        _flushall();
        scanf("%s", &emp_name);
        strcpy(employee->name,emp_name);

        printf("Please enter the employee salary: ");
        scanf("%f", &employee->salary);

        printf("Please enter the employee commission: ");
        scanf("%f", &employee->commission);

        printf("Please enter the employee deduction: ");
        scanf("%f", &employee->deduction);


        float netsalary = employee->salary + employee->commission + employee->deduction;
        printf("\nEmployee Details:\nID: %d\nName: %s\nSalary: %.2f\nCommission: %.2f\nDeduction: %.2f\nNetsalary: %.2f\n\n",employee->id,employee->name,employee->salary,employee->commission,employee->deduction, netsalary);

        printf("Do you want to redo the task? y|n:  ");
        _flushall();
        scanf("%c",&redo);
        printf("\n");

    }while(redo == 'y' || redo == 'Y');

    return 0;
}

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
    ///3- 10 Employees with choose index then print what you entered with netsalary

    char redo = 'y';
    int employeeNumber, index;



    printf("Please enter the number of employee: ");
    scanf("%d",&employeeNumber);

    struct Employee employees[employeeNumber];
    float netsalary[employeeNumber];
    int chooseAtIndex[employeeNumber];

    do{
        do{
            printf("Please enter the index: ");
            scanf("%d",&index);
        }while(index < 0 || index > employeeNumber - 1);
        chooseAtIndex[index] = 1;

        printf("\nPlease enter employee id: ");
        scanf("%d",&employees[index].id);

        printf("Please enter employee name: ");
        _flushall();
        scanf("%s",&employees[index].name);

        printf("Please enter employee salary: ");
        scanf("%f",&employees[index].salary);

        printf("Please enter employee commission: ");
        scanf("%f",&employees[index].commission);

        printf("Please enter employee deduction: ");
        scanf("%f",&employees[index].deduction);
        printf("\n");

        netsalary[index] = employees[index].salary + employees[index].commission - employees[index].deduction;


        for(int i = 0; i < employeeNumber; i++){
            if(chooseAtIndex[i] == 1){
                printf("\nEmployee %d Details:\nID: %d\nName: %s\nSalary: %.3f\nCommission: %.3f\nDeduction: %.3f\nNetsalary: %.3f\n",i,employees[i].id, employees[i].name, employees[i].salary, employees[i].commission, employees[i].deduction,netsalary[i]);
            }

        }



        printf("\nDo you want to redo the task? (y|n):  ");
        _flushall();
        scanf("%c",&redo);
        printf("\n");

    }while((redo == 'y' || redo == 'Y') && index < employeeNumber);
    return 0;
}

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
    ///2- 3 Employees read and write with netsalary

    char redo = 'y';
    int employeeNumber;

    do{
        printf("Please enter the number of employee: ");
        scanf("%d",&employeeNumber);

        struct Employee employees[employeeNumber];
        float netsalary[employeeNumber];

        for(int i = 0; i < employeeNumber; i++){
            printf("\nPlease enter employee%d id: ",i+1);
            scanf("%d",&employees[i].id);

            printf("Please enter employee%d name: ",i+1);
            _flushall();
            scanf("%s",&employees[i].name);

            printf("Please enter employee%d salary: ",i+1);
            scanf("%f",&employees[i].salary);

            printf("Please enter employee%d commission: ",i+1);
            scanf("%f",&employees[i].commission);

            printf("Please enter employee%d deduction: ",i+1);
            scanf("%f",&employees[i].deduction);
            printf("\n");

            netsalary[i] = employees[i].salary + employees[i].commission - employees[i].deduction;
        }

        for(int i = 0; i < employeeNumber; i++){
            printf("\nEmployee %d Details:\nID: %d\nName: %s\nSalary: %.3f\nCommission: %.3f\nDeduction: %.3f\nNetsalary: %.3f\n",i,employees[i].id, employees[i].name, employees[i].salary, employees[i].commission, employees[i].deduction,netsalary[i]);

        }



        printf("\nDo you want to redo the task? (y|n):  ");
        _flushall();
        scanf("%c",&redo);
        printf("\n");

    }while(redo == 'y' || redo == 'Y');
    return 0;
}

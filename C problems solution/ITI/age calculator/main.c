#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getMonthDays(int month, int year){

    int day;
    switch(month)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                day = 31;
            break;


            case 4:
            case 6:
            case 9:
            case 11:
                day = 30;
            break;


            case 2:
                if(year % 4 == 0){
                    day = 29;
                }else{
                    day = 28;
                }
            break;
        }

        return day;
}

int main()
{
    int birth_year, birth_month, birth_day;
    int current_year, current_month, current_day;
    int year, month, day;
    int dayMax;
    char redo = 'y';

    do{
        /// Birthdate
        do{
            printf("Please enter your birthdate year: ");
            scanf("%d",&birth_year);
        }while(birth_year < 1950);

        do{
            printf("Please enter your birthdate month: ");
            scanf("%d",&birth_month);
        }while(birth_month > 12);


        do{
            printf("Please enter your birthdate day: ");
            scanf("%d",&birth_day);
        }while(birth_day > getMonthDays(birth_month, birth_year));


        /// end date
        do{
            printf("\nPlease enter the end year: ");
            scanf("%d",&current_year);
        }while(current_year < birth_year);

        do{
            printf("Please enter the end month: ");
            scanf("%d",&current_month);
        }while(birth_month > 12);

        dayMax = getMonthDays(current_month, current_year);
        do{
            printf("Please enter the end day: ");
            scanf("%d",&current_day);
        }while(current_day > dayMax);

        if(current_day < birth_day){
            current_day += dayMax;
            current_month--;
        }

        if(current_month < birth_month){
            current_month += 12;
            current_year--;
        }

        year = current_year - birth_year;
        month = current_month - birth_month;
        day = current_day - birth_day;


        printf("\nyou're %d year %d month %d day\n\n",year, month, day);
        printf("Do you want to redo the test? y|n  ");
        _flushall();
        scanf("%c",&redo);
        printf("\n");

    }while(redo == 'y' || redo == 'Y');


    return 0;
}

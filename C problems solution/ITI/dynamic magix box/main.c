#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include<conio.h>

void gotoxy( int column, int line )
{
    COORD coord;
    coord.X = column;
    coord.Y = line;
    SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);
}

int main()
{

    int size, col, row;
    char redo = 'y';

    do{
        do{
            printf("please enter the size of magic box: ");
            scanf("%d",&size);
        }while(size % 2 == 0 || size == 1);

        col = size/2 +1;
        row = 1;


        system("cls");
        for(int i = 1; i < size * size; i++){

            gotoxy(col*2,row*2);
            printf("%d",i);
            if(i % size != 0){
                row--;
                col--;

                if(row == 0){
                    row = size;
                }
                if(col == 0){
                    col = size;
                }
            }else{
                row++;
                if(row == size){
                    row = 1;
                }
            }
        }

        gotoxy(size,size*row);
        printf("\n\nDo you want to redo the test? y|n  ");
        _flushall();
        scanf("%c",&redo);
        system("cls"); /// if codeblock 32
        ///system("clear"); /// if codeblock 64
    }while(redo == 'y' || redo == 'Y');
    return 0;
}

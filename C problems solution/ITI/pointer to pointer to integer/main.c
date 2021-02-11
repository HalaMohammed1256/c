#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int* ptr;
    int** ptrToptr;
    char redo = 'y';

    do{
        printf("please enter the number: ");
        scanf("%d",&x);

        ptr = &x;
        ptrToptr = &ptr;

        printf("\naddress of x: %x",&x);
        printf("\naddress of pointer: %x",&ptr);
        printf("\naddress of pointer to pointer: %x\n",&ptrToptr);

        printf("\nvalue of x: %d",x);
        printf("\nvalue of pointer: %x",ptr);
        printf("\nvalue of pointer to pointer: %x\n",ptrToptr);


        printf("\nvalue of x by using pointer: %d",*ptr);
        printf("\nvalue of x by using pointer to pointer: %d\n",**ptrToptr);

        printf("\nincrement value of x: %d",++x);
        printf("\nincrement value of x by using pointer: %d",++(*ptr));
        printf("\nincrement value of x by using pointer to pointer: %d\n",++(**ptrToptr));

        printf("\nDo you want to redo the task? y|n:  ");
        _flushall();
        scanf("%c",&redo);
        printf("\n");

    }while(redo == 'y' || redo == 'Y');


    return 0;
}

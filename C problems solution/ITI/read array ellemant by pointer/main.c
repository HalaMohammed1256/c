#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    int* ptr;
    char redo = 'y';

    do{
        printf("please enter the size of array: ");
        scanf("%d",&size);
        printf("\n");

        int arr[size];
        ptr = arr;

        for(int i = 0; i < size; i++,ptr++){
            printf("please enter the array element %d: ",i+1);
            scanf("%d",ptr);
        }
        ptr = arr;

        printf("\narray elements by using pointer:\n");
        for(int i = 0; i < size; i++,ptr++){
            printf("%d ",*ptr);
        }

        printf("\n\naddress of pointer: %x",&ptr);
        printf("\n\narray address by using pointer:\n");
        for(int i = 0; i < size; i++,ptr++){
            printf("address of element %d: %x\n",i+1,&*ptr);
        }


        printf("\n\nDo you want to redo the task? y|n:  ");
        _flushall();
        scanf("%c",&redo);
        printf("\n");

    }while(redo == 'y' || redo == 'Y');


    return 0;
}

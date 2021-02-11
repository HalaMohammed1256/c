#include <stdio.h>
#include <stdlib.h>


int main()
{
    ///2-dynamic allocation on array of integer => pointer of integer => 1D array

    char redo = 'y';
    int size;
    int *ptr;



    do{
        printf("Please enter the array size: ");
        scanf("%d",&size);

        ptr = malloc(size * sizeof(int));

        for(int i = 0; i < size; i++){
            printf("Please enter the array element %d: ",i+1);
            scanf("%d",&ptr[i]);
        }

        printf("\nArray elements:\n");
        for(int i = 0; i < size; i++){
            printf("%d ",ptr[i]);
        }



        printf("\n\nDo you want to redo the task? y|n:  ");
        _flushall();
        scanf("%c",&redo);
        printf("\n");

    }while(redo == 'y' || redo == 'Y');


    ///3- try pointer to pointer to allocate 2D Array
    return 0;
}

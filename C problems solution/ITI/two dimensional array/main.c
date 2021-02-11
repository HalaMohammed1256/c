#include <stdio.h>

int main(int argc, const char * argv[]) {

    char ch;
    int row, column;
    do{
        printf("please enter row size: ");
        scanf("%d",&row);

        printf("please enter column size: ");
        scanf("%d",&column);

        int arr[row][column];
        int sumOfCols[column];
        for(int i =0; i < row; i++){
            for(int j=0; j< column; j++) {
                sumOfCols[j]=0;
                printf("please enter element number (%d , %d): ",i+1,j+1);
                scanf(" %d",&arr[i][j]);
            }
        }

        // sum of columns
        for(int i =0; i < column; i++){
            for(int j=0; j< row; j++) {
                sumOfCols[i]+=arr[j][i];
            }
        }


        //print array
        printf("\narray element:\n");
        for(int i =0; i < row; i++){
            for(int j=0; j< column; j++) {
                printf("%d ",arr[i][j]);
            }
        }
        printf("\n");

        //sum of column =>read
        printf("\nsum of columns\n");
        for(int j=0; j< column; j++) {
            printf("%d ",sumOfCols[j]);
        }
        printf("\n");


        printf("\n\nDo you want to redo the test? (y|n): ");
        scanf(" %c",&ch);
    }while (ch=='Y' || ch=='y');
    return 0;
}

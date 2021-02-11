//
//  main.c
//  2D_Array
//
//  Created by Hala on 01/01/2021.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    char ch;
    int sum = 0,row1 ,column1 ,row2 ,column2;
    do{

        printf("please enter row size of first array: ");
        scanf("%d",&row1);

        printf("please enter column size of first array: ");
        scanf("%d",&column1);

        int arr1[row1][column1];

        //read first array
        for(int i = 0; i < row1; i++){
            for(int j = 0; j < column1; j++) {
                printf("please enter element number of first array (%d , %d): ",i+1,j+1);
                scanf(" %d",&arr1[i][j]);
            }
        }

        printf("\nplease enter row size of second array: ");
        scanf("%d",&row2);

        printf("please enter column size of second array: ");
        scanf("%d",&column2);


        int arr2[row2][column2];

        //read second array
        for(int i = 0; i < row2; i++){
            for(int j = 0; j < column2; j++) {
                printf("please enter element number of second array (%d , %d): ",i+1,j+1);
                scanf(" %d",&arr2[i][j]);
            }
        }

        int multiplyArrays[row1][column2];


        for(int i =0; i < row1; i++){
            for(int j=0; j< column2; j++) {
                multiplyArrays[i][j] = 0;
                for (int k = 0; k < row2; k++) {
                    sum = sum + arr1[i][k]*arr2[k][j];
                }
                multiplyArrays[i][j] = sum;
                sum = 0;
            }
        }


        //print array
        printf("\nmultiply 2 arrays element:\n");
        for(int i =0; i < row1; i++){
            for(int j=0; j < column2; j++) {
                printf("%d ",multiplyArrays[i][j]);
            }
            printf("\n");
        }
        printf("\n");


        printf("\n\nDo you want to redo the test? (y|n): ");
        scanf(" %c",&ch);
    }while (ch=='Y' || ch=='y');



    return 0;
}

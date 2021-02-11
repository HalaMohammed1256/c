#include <stdio.h>

int main(int argc, const char * argv[]) {
 int size, minValue=0, maxValue, temp, minIndex;
    char ch;
    do{
        printf("please enter array size: ");
        scanf("%d",&size);
        int arr[size];
        for(int i =0; i < size; i++){
            printf("please enter element number %d: ",i+1);
            scanf("%d",&arr[i]);
        }

        minValue=arr[0];
        maxValue=arr[0];
        for(int i =0; i < size; i++){
            // min value
            if(arr[i] < minValue){
                minValue =arr[i];
                minIndex =i;
            }

            // max value
            if(arr[i] > maxValue){
                maxValue=arr[i];
            }
        }


        // insertion sort algorithm
        for(int i=1;i<size;i++){
              temp=arr[i];
              int j=i-1;
              while((temp<arr[j])&&(j>=0)){
                 arr[j+1]=arr[j];
                 j=j-1;
              }
              arr[j+1]=temp;
           }


        printf("\nminimun number: %d\nmaximun number: %d\n\nsorted array\n",minValue,maxValue);
        for (int i =0; i<size; i++) {
            printf("%d ",arr[i]);
        }

        printf("\n\nDo you want to redo the test? (y|n): ");
        scanf(" %c",&ch);
    }while (ch=='Y' || ch=='y');

    return 0;
}

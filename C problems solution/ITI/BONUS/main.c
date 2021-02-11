#include <stdio.h>

int main(int argc, const char * argv[]) {
    int size, temp, maximumDistance = 0;
        char ch;
        do{
            printf("please enter array size: ");
            scanf("%d",&size);
            int arr[size];
            for(int i =0; i < size; i++){
                printf("please enter element number %d: ",i+1);
                scanf("%d",&arr[i]);
            }


               for (int i = 0; i < size - 1; i++)
                  for (int j = i + 1; j < size; j++)
                     if (arr[i] == arr[j]){
                         temp=j-i-1;
                         maximumDistance = maximumDistance>temp?maximumDistance:temp;
                     }

            printf("Maximum distance is: %d",maximumDistance );
            printf("\n\nDo you want to redo the test? (y|n): ");
            scanf(" %c",&ch);
        }while (ch=='Y' || ch=='y');
        return 0;
}

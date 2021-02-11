#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
{

    int n;
    scanf("%d", &n);

    int val = 2*n - 1;
    int arr[val][val];

    int start = 0;
    int end = val - 1;

    while(n != 0){
        for(int i = start; i <= end; i++){
            for(int j = start ; j <= end; j++){
               if(i == start || j == start || i == end || j == end){
                    arr[i][j] = n;
                }
            }
        }
        ++start;
        --end;
        --n;
    }



   for(int i = 0; i < val; i++){
        for(int j = 0 ; j < val; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }






    return 0;
}


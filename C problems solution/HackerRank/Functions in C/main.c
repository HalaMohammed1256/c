#include <stdio.h>
#include <stdlib.h>

int max_of_four(int a, int b, int c, int d){
    int arr[4] = {a, b, c, d};
    int maxVale = arr[0];
    for(int i = 1; i < 4; i++){
        if(arr[i] > maxVale){
            maxVale = arr[i];
        }
    }
    return maxVale;
}

int main()
{
    int intNum1, intNum2, intNum3, intNum4;

    scanf("%d %d %d %d", &intNum1,&intNum2, &intNum3,&intNum4);
    int maxNum = max_of_four(intNum1, intNum2, intNum3, intNum4);
    printf("%d", maxNum);


    return 0;
}

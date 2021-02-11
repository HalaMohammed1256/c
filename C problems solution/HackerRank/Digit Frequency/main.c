#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    char ptr[1000];
    int arr[10] = {0};

    scanf("%[^\n]", ptr);

    int i = 0;
    while(ptr[i] != 0){
        switch(ptr[i]){
            case'0':
                arr[0] += 1;
            break;
            case'1':
                arr[1] += 1;
            break;
            case'2':
                arr[2] += 1;
            break;
            case'3':
                arr[3] += 1;
            break;
            case'4':
                arr[4] += 1;
            break;
            case'5':
                arr[5] += 1;
            break;
            case'6':
                arr[6] += 1;
            break;
            case'7':
                arr[7] += 1;
            break;
            case'8':
                arr[8] += 1;
            break;
            case'9':
                arr[9] += 1;
            break;
        }
        i++;
    }

    for(int i = 0; i <= 9; i++){
        printf("%d ", arr[i]);
    }



    return 0;
}

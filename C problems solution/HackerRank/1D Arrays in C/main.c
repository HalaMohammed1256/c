#include <stdio.h>
//#include <conio.h>
#include <stdlib.h>



int main()
{

    int n;
    scanf("%d", &n);

    int arr[n];
    int sum = 0;

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("%d",sum);


    return 0;
}


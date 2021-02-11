#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void numName(int n){
    if(n == 1){
        printf("one\n");
    }else if(n == 2){
        printf("two\n");
    }else if(n == 3){
        printf("three\n");
    }else if(n == 4){
        printf("four\n");
    }else if(n == 5){
        printf("five\n");
    }else if(n == 6){
        printf("six\n");
    }else if(n == 7){
        printf("seven\n");
    }else if(n == 8){
        printf("eight\n");
    }else if(n == 9){
        printf("nine\n");
    }
}

void evenOdd(int n){
    if(n % 2 == 0){
        printf("even\n");
    }else {
        printf("odd\n");
    }
}

int main()
{
    int num1, num2;
    scanf("%d %d",&num1, &num2);

    for(int i = num1; i <= num2; i++){
        if(i <= 9){
            numName(i);
        }else{
            evenOdd(i);
        }
    }

    return 0;
}

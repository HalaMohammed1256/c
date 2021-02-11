#include <stdio.h>
#include <stdlib.h>


int main()
{



    int num1, sum = 0, remainder;
    scanf("%d",&num1);
    while(num1 > 0 && num1 <= 99999){
        remainder = num1 % 10;
        sum += remainder;
        num1 /= 10;
    }

    printf("%d", sum);



    return 0;
}

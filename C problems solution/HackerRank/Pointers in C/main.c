#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void update(int *a,int *b){
    int x = *a + *b;
    int y = abs(*a - *b);

    *a = x;
    *b = y;
}

int main()
{
    int intNum1, intNum2;

    scanf("%d %d", &intNum1,&intNum2);
    update(&intNum1, &intNum2);

    printf("%d\n%d", intNum1, intNum2);


    return 0;
}

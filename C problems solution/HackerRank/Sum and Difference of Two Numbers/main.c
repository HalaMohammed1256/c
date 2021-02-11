#include <stdio.h>
#include <stdlib.h>

int main()
{
    int intNum1, intNum2;
    float floatNum1, floatNum2;

    scanf("%d %d", &intNum1,&intNum2);
    scanf("%f %f", &floatNum1,&floatNum2);

    printf("%d %d\n%.1f %.1f", intNum1 + intNum2, intNum1 - intNum2, floatNum1 + floatNum2, floatNum1 -floatNum2);


    return 0;
}

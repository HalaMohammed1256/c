//
//  main.c
//

#include <stdio.h>

int sum(int x, int y){
    return x+y;
}

int sub(int x, int y){
    return x-y;
}

int mult(int x, int y){
    return x*y;
}

int divide(int x, int y){
    return x/y;
}


int main(int argc, const char * argv[]) {
    int firstNumber, secondNumber;
    char ch, opr;
    do{
        printf("please enter the first number: ");
        scanf("%d/n",&firstNumber);

        printf("please enter the second number: ");
        scanf("%d/n",&secondNumber);

        do{
            printf("please enter the operator (*,+,-,/): ");
            scanf(" %c",&opr);

            if (opr == '*') {
                printf("%d %c %d = %d",firstNumber,opr,secondNumber,mult(firstNumber, secondNumber));
            }else if (opr == '+'){
                printf("%d %c %d = %d",firstNumber,opr,secondNumber,sum(firstNumber, secondNumber));
            }else if (opr == '-'){
                    printf("%d %c %d = %d",firstNumber,opr,secondNumber,sub(firstNumber, secondNumber));
            }else if (opr == '/'){
                if(secondNumber == 0){
                    printf("cannot divide by zero");
                }else{
                    printf("%d %c %d = %d",firstNumber,opr,secondNumber,divide(firstNumber, secondNumber));
                }
            }
        }while (opr !='*' && opr !='+' && opr !='-' && opr !='/');

        printf("\nDo you want to redo the test? (y|n): ");
        scanf(" %c",&ch);

    }while (ch=='Y' || ch=='y');
    return 0;
}

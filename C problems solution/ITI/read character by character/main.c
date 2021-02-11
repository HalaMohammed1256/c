#include <string.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    char redo, ch;
    char arr[40];
    int i=0;
    do{
        printf("please enter string: ");

        do
        {
            ch=getch();
            arr[i]=ch;
            i++;
        }
        while(ch!=13);
        arr[i]='\0';
        printf("%s",arr);


        _flushall();

        _flushall();
        printf("\n\nDo you want to redo the test? (y|n): ");
        scanf("%c",&redo);
        _flushall();
    }while (redo == 'Y' || redo == 'y');

    return 0;
}

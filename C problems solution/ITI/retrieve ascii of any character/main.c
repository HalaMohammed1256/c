#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {


    char ch;
    char redo;
    do
    {
        printf("please enter character: ");
        ch = getch();
        if(ch == -32){
            ch = getch();
            printf("\nExtended ASCII: %d",ch);
        }
        else
        {
            printf("\nNormal ASCII %d",ch);
        }
        _flushall();
        printf("\n\nDo you want to redo the test ??? y|n: ");
        redo = getch();
        printf("\n\n");
    }while(redo=='Y' || redo=='y');





    return 0;
}

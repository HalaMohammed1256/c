#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///Strings for  and  will have fewer than 100 characters, including the newline.
    char s[100], sen[100];
    char ch;
    scanf("%c", &ch);
    scanf("%s", &s);
    scanf("\n");
    //scanf("%[^\n]%*c", &sen);
    scanf("%[^\n]",&sen);
    printf("%c\n%s\n%s",ch,s,sen);

    return 0;
}



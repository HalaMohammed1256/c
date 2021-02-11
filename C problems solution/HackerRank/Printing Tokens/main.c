#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    char *ptr = malloc(1000 * sizeof(char));

    scanf("%[^\n]", ptr);

    int i = 0;
    while(ptr[i] != 0){
        if(ptr[i] == 32){
            ptr[i] = '\n';
        }
        i++;
    }
    printf("%s",ptr);


    return 0;
}

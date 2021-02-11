#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calculate_the_maximum(int n, int k){
    int maxAND = 1 & 2, maxOR = 1 & 2, maxXOR = 1 & 2, temp, temp1, temp2, temp3;
    for(int i = 1; i <= k; i++){
        for(int j = i+1; j <= n; j++){
            /// AND
            temp1 = i & j;
            if(temp1 > maxAND && temp1 < k){
                temp = temp1;
                temp1 = maxAND;
                maxAND = temp;
            }

            /// OR
            temp2 = i | j;
            if(temp2 > maxOR && temp2 < k){
                temp = temp2;
                temp2 = maxOR;
                maxOR = temp;
            }

            ///XOR
            temp3 = i ^ j;
            if(temp3 > maxXOR && temp3 < k){
                temp = temp3;
                temp3 = maxXOR;
                maxXOR = temp;
            }
        }
    }
    printf("%d\n%d\n%d", maxAND, maxOR, maxXOR);
}

int main()
{

    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n,k);


    return 0;
}


#include <stdio.h>

int main(){

    int i, k, n = 10;
    i = 2, k = 20;

    for ( i = 2; i < n; i+= 2)
    {
        if (i == 8)
        {
            k = k*2;
        }
    }
    printf("k is %d\n", k);
    printf("The program stops at %d.", i);
}
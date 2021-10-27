#include <stdio.h>

int main(){

    int i, k, n = 10;
    i = 2, k = 20;
    while (i < n)
    {
        if(i == 8){
            k = k*2;
        }
    i += 2;
    }
    printf("k is %d\n", k);
    printf("The program stops at %d.", i);
}
#include<stdio.h>

int main(){
    // given the following array of unit:
    int unit[5] = {64, 34, -4, 5, 26};

    // A) result = unit[3 - 2] - unit [4];
    int result = unit[3 - 2] - unit [4];
    printf("A) %i\n", result);

    // B)	result = unit[2] – 2 * unit[1];
    result = unit[2] - 2 * unit[1];
    printf("B) %i\n", result);

    // C)	result =  unit[0] + unit[ 1 * 2];
    result =  unit[0] + unit[ 1 * 2];
    printf("C) %i\n", result);
}
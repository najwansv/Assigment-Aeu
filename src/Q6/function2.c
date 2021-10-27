#include<stdio.h>

void two(float a, float b){
    printf("Product of a: %.2f\n"
    "Product of b: %.2f",
    a, b);
}

int main (){

    float a, b;
    printf("input value of a: ");
    scanf("%f", &a);

    printf("input value of b: ");
    scanf("%f", &b);

    two(a, b);
    return 0;
}
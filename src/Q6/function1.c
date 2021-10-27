#include<stdio.h>

int one(int x, int y){
    if (x >y)
    {
        return x + y;
    } else {
        return 0;
    }
}

int main(){
    int x, y, sum;
    printf("input x: ");
    scanf("%i", &x);

    printf("input y: ");
    scanf("%i", &y);

    sum = one(x, y);
    printf("sum of x and y is %i", sum);
}   
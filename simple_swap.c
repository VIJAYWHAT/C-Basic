#include <stdio.h>

int main() {
int x = 10, y = 15;

    int temp;

    temp = x;
    x = y;
    y = temp;

    printf("x is %d , y is %d",x,y);
}
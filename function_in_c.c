#include <stdio.h>

    int max(int x, int y){
    if(x > y){
        return x;
    }else{
        return y;
    }
    }
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int left_max = max(a, b);
    int right_max = max(c, d);
    int final_max = max(left_max, right_max);
    printf("%d", final_max);
    
    return 0;
}
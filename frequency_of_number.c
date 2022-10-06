#include <stdio.h>

int main(){


    int array[] = {1,
                   2,
                   6,
                   4,
                   8,
                   5,
                   9,
                   7,
                   8,
                   10,
                   1,
                   6,
                   3,
                   8,
                   6,
                   10,
                   3,
                   8,
                   2,
                   7,
                   6,
                   5,
                   7,
                   6,
                   8,
                   6,
                   7,
                   5,
                   6,
                   6,
                   5,
                   6,
                   7,
                   5,
                   6,
                   4,
                   8,
                   6,
                   8,
                   10};

    int count = 0;
    printf("value%13s\n","frequency"); //%13s for the space
    for(int i=1;i<=10;i++){
        for(int j=1;j<=40;j++){ 
            if(array[j] == i){ //check the i in array[j]
                count++; //adding the count
            }
        }

        printf("%d%13d\n",i,count);
        count = 0;
    }

return 0;
                   
}
#include <stdio.h>

int main(){


   int array[] = {2,4,5,2,2,3,4,4,5,2,3,3,4,5,6,6,2,2,2};
    int arr[10];


   int count = 0;

    for (int i = 1; i <= 10 ; i++)
    {
        for (int j = 0; j <= 19; j++)
        {
            if(array[j] == i){
                count++;
            } 
        }
         int a[10],out;
        a[out] = count;
int b;
    
    for (out = 0; out <= count ; out++)
    { for (b = a + 1; b < 10; b++)
    {
        if(a[out] > a[b] ){
            a[out] = out;
        }
    }
 }
       
         printf("%d\n",out);
    
        count = 0;


    }
    
}



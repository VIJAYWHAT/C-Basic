#include <stdio.h>

int main(){

    int arr[] = {1,2,3,4,6,3,5,3};
    int n = 8;
    int sum = 7;

    for(int i=0;i<n;i++){
        for(int j=i+1 ;j<n;j++){
            
            if(arr[i]+arr[j] == sum){
                printf("%d + %d = %d \n",arr[i],arr[j],sum);
            }
        }
    }
}
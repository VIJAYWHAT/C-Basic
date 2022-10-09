#include <stdio.h>
#include <math.h>

// [2, 2, 2, 1, 1, 3, 4, 4]
int main() {
    // Write C code here
    int a;
    int arr[] = {2, 2, 2, 1, 1, 3, 4, 4};
    int n = 8;
    
    // find the number with max frequency postive numbers
    // using one for loop
    // sort the array in ascending order -- bubble sort
    
    for (int i = 0; i < n; ++i) 
        {
 
            for (int j = i + 1; j < n; ++j)
            {
 
                if (arr[i] > arr[j]) 
                {
 
                    a =  arr[i];
                    arr[i] = arr[j];
                    arr[j] = a;
 
                }
 
            }
 
        }
    
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    
    int val = 1;
    int max_val = -100;
    int number = -1;
    for(int i = 0; i < n-1; i++){
        
        printf("curent_number: %d, val: %d, max_val: %d\n", arr[i], val, max_val);
        if(arr[i] == arr[i+1]){
            val += 1;
        }
        else{
            if(max_val < val){
                max_val = val;
                number = arr[i];
            }
            // for reset 
            val = 1;
        }
        
    }
    
    printf("The max freq is: %d, and number is: %d", max_val, number);
    

    return 0;
}
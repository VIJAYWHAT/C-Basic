#include <stdio.h>
void main() 
{
    int n; 
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
 
    int array[n];
    
    //take the n number of input
    for(int i=0;i<n;i++) {
    printf("Enter %d elements in the array: ",i+1);
        scanf("%d",&array[i]);
    }
 
    
    printf("Even numbers are: ");
    for(int i=0;i<n;i++)
{
        if(array[i]%2==0){ //check the even numbers
            printf("%d ", array[i]); //print the even numbers
    }
}


    
}
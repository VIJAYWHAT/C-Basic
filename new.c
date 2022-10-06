#include <stdio.h>
void main() 
{
    int n;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
 
    int arr[n];
 
    //Take n elements as input from the user
    for(int i=0;i<n;i++)
    {
    printf("Enter %d elements in the array: ",i+1);
        scanf("%d",&arr[i]);
    }
 
    //Print all the even numbers
    printf("Even numbers in the array are: ");
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            printf("%d ", arr[i]);
    }
 
    //print all the odd numbers
    printf("\nOdd numbers in the array are: ");
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==1)
            printf("%d ", arr[i]);
    }
}
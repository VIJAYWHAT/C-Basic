#include<stdio.h>  
  
void swap(int, int);

int main()  
{  
    int a = 2, b = 5; 
  
    swap(a, b);  
  
    return 0;  
}  
  
void swap(int x, int y)  
{  
    int temp;  
  
    temp = x;  
    x    = y;  
    y    = temp;  
  
   printf("a = %d and b = %d\n", x, y); 
  
    
}
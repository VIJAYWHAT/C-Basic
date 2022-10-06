#include <stdio.h>

int main() {

  int n,arr[10];

  printf("Enter the number of elements:");
    scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    printf("Enter number %d:",i+1);
    scanf("%d", &arr[i]);
  }

  int max = arr[0];
  int min = arr[0];

  for (int i = 1; i < n;i++ ) {
    if ( max < arr[i]) {
       max = arr[i];
    }

    if ( min > arr[i]) {
       min = arr[i];
    }
  }

  printf("Largest number = %d\n", max);
  printf("smallest number = %d\n", min);

  return 0;
}
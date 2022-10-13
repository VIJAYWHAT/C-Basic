#include <stdio.h>

int main(){

    int n = 100;
    int i = 0;
    char name[n];
    int length = 0;

    printf("enter the name: ");
    fgets(name,n,stdin);

    while (name[i] != '\0')
    {
        length++;
        i++;

    }
            
        printf("length of string: %d\n",length-1);
}
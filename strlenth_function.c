#include <stdio.h>
#include <string.h>

int mystrlen(char *s)
{
    int i = 0;
    while (*(s + i) != '\0')
    {
        i++;
    }

    return i;
}

int main()
{
    char name[100];
    printf("Enter name: ");
    fgets(name, 100, stdin);

    // find the string length
    int len = mystrlen(name);
    printf("len: %d\n", len);
    return 0;
}
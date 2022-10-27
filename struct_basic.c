#include <stdio.h>

struct Employee
{
    char name[100];
    int age;
    char address[2][10];
    long phn;
    int id;
};


int main()
{
    struct Employee emp1;
    struct Employee emp[10];
    emp1.age = 20;
    emp1.phn = 9876321892;
    printf("Employee 1 age is: %d\n", emp1.age);
    printf("Employee 1 age is: %ld\n", emp1.phn);
    return 0;
}
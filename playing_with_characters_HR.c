#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() 
{
  
int n=100;  
char ch[n],s[n],sen[n];

scanf("%s %s %[^\n]%*c", &ch,&s,&sen);
printf("%s\n%s\n%s", ch,s,sen);

        
    return 0;
}
#include <stdio.h>

int main(){

    int i,j,n;

    printf("enter the n:");
    scanf("%d",&n);

    for (int i = 1; i <= 2 * n - 1; i++) //input(3)i=1;i<= 2 * n-1(2*3-1=5);i++
    {//output(i = 4)
        int c; 
        if (i > n) //check i > n (2 > n)
        {
            c = n - (i - n); //(n-(i-n)) (3-(4-3))(3-(1))c=2
        }
        else
        {
            c = i; //c = 2
        }
        for (int j = 1; j <= c; j++) //j=1;j=c(j=2);j++ 1,2
        {
            printf("%d", j); //printing(1,2)

        
        }
        printf("\n");
    }
}


//EXPLANATION

// n=3
// i = 1; i <= 2 * n - 1; i++
// i<=(2*n-1)(2*3-1)i<=5
// i=1
// if(i>n)(1>3) no
// else(c=i)(c=1)
// j = 1; j <= c; j++
// j<=c(j<=1) 
// print(j)=1 -jloop end go to i 

// n=3
// i=2;i<=5
// if(i>n)(2>3) no
// else(c=i)(c=2)
// j = 1; j <= c; j++
// j<=c(j<=2) 
// print(j)=1,2 -jloop end go to i

// n=3
// i=3;i<=5
// if(i>n)(3>3) no
// else(c=i)(c=3)
// j = 1; j <= c; j++
// j<=c(j<=3) 
// print(j)=1,2,3 -jloop end go to i

// n=3
// i=4;i<=5
// if(i>n)(4>3) yes
// c = n - (i - n); //(n-(i-n))(3-(4-3))(3-(1))c=2
// j = 1; j <= c; j++
// j<=c(j<=2) 
// print(j)=1,2 -jloop end go to i

// n=3
// i=4;i<=5
// if(i>n)(5>3) yes
// c = n - (i - n); //(n-(i-n))(3-(4-3))(3-(2))c=1
// j = 1; j <= c; j++
// j<=c(j<=1) 
// print(j)=1 -jloop end go to i



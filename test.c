#include <stdio.h>

int main(){

float bp,da,hra,grpay;

printf("enter the basic pay of vj: ");
scanf("%f",&bp);

da = 0.4*bp;
hra = 0.2*bp;
grpay = bp+da+hra;

printf("\n Basic pay 0f vj %f",bp);
printf("\ndearness allowance %f",da);
printf("\nhouse rend allowance %f",hra);
printf("\nGrosspay of vj is %f",grpay);


    return 0;
}
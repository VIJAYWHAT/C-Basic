#include <stdio.h>

int main(){
    int voting_age;
    

    printf("enter you age:");
    scanf("%d",&voting_age);

   

    if(voting_age >= 18){

    printf("Legal to vode,collect your voter id\n");
    
    }

    /*else if(voting_age == 17)
    {
       printf("please wait for %d more year to vote\n",18-voting_age); 
    } */
    
    else{
    
        
        const char *year = (voting_age == 17) ? "year" : "years";   
    
        printf("please wait for %d more %s to vote\n",18-voting_age,year);
    }
    
}
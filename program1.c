#include <stdio.h>

int main(){

    int mark;
    char grade;
    
    printf("enter your Mark : ");
    scanf("%d", &mark);

    if(mark<=100){
        grade='A';
        printf("You Are Passed With Grade %c",grade);
    }
    else if(mark<=70){
        grade='B';
        printf("You Are Passed With Grade %c",grade);
    }    
    else if(mark<=60){
        grade='C';
        printf("You Are Passed With Grade %c",grade);
    }
    else if(mark<=50){
        grade='D';
        printf("You Are Passed With Grade %c",grade);
    }    
    else if(mark<=35){
        grade='F';
        printf("You Are failed..!! ");
    }
    else if(mark>100){
         grade='F';
        printf("Invalid Input...");      
    }
    else{
         grade='F';
        printf("Invalid Input...");      
    }

    switch (grade){
        case 'A':
        printf("\tExellent\n");
        break;

        case 'B':
        printf("\tAbove average\n");
        break;

        case 'C':
        printf("\taverage\n");
        break;

        case 'D':
        printf("\tBelow average\n");
        break;

        default:
        printf("\tFail\n");
        break;
    }

    if (grade=='F')
    {
       printf("\nYour Not Eligible For Next Level....");
    }
    else{
        printf("\nYour Eligible For Next Level....");   
    }
    
    // (grade=='F') ? printf("\nYour Not Eligible For Next Level....") : printf("\nYour Eligible For Next Level....");
}
#include<stdio.h>

int main(){

    // Alphabet Skipper
    char alpha='a';
    do
    {
     printf("%c ",alpha);
     alpha+=4;
    } while (alpha<='z');
    

    // digit counter
    int num,count=0;
    
    printf("\nenter your Digit : ");
    scanf("%d",&num);
    do{
        num=num/10;
        count++;
    }while(num>=1);
    
    printf("\tTotal Digits : %d",count);


    // digit Addition
    int digit,ld,fd,sum=0;
    
    printf("\nenter your Digit : ");
    scanf("%d",&digit);

    ld=digit%10;
    fd=digit/100;
    sum=ld+fd;

    printf("%d %d",ld,fd);
    printf("\tTotal Digits : %d",sum);
};
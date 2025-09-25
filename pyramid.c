#include<stdio.h>

int main(){

    for (int i=1;i<=5;i++)
    {
        for (int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n"); 
    }
        printf("\n"); 
    // output
    // *
    // **
    // ***
    // ****
    // *****
    // __________________________________________________________________________

    for (int i=1;i<=5;i++)
    {
        char alp='A';
        for (int j=1;j<=i;j++)
        {
            printf("%c",alp);
            alp++;
        }
        printf("\n"); 
    }
    printf("\n"); 
 
    // output
    // A
    // AB
    // ABC
    // ABCD
    // ABCDE
    // __________________________________________________________________________
    
    char al='A';
    for (int i=1;i<=5;i++)
    {
        for (int j=1;j<=i;j++)
        {
            printf("%C",al);
        }
        al++;
        printf("\n"); 
    }
    printf("\n"); 

    // output
    // A
    // BB
    // CCC
    // DDDD
    // EEEEE
    // __________________________________________________________________________
    
    
    
    char alpa='A';
    for (int i=1;i<=5;i++)
    {
        for (int j=1;j<=i;j++)
        {
            printf("%C",alpa);
            alpa++;
        }
        printf("\n"); 
    }
    printf("\n"); 
    // output
    // A
    // BC
    // DEF
    // GHIJ
    // KLMNO
    // __________________________________________________________________________
    
    for (int i=5;i>=1;i--)
    {
        for (int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n"); 
    }
    printf("\n"); 
    // output
    // 12345
    // 1234
    // 123
    // 12
    // 1
    
    for (int i=5;i>=1;i--)
    {
        for (int j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n"); 
    }
    printf("\n"); 

    // output
    // 55555
    // 4444
    // 333
    // 22
    // 1
    // __________________________________________________________________________

        for (int i=5;i>=1;i--)
    {
        for (int j=1;j<=i;j++)
        {
            printf("%d",i%2);
        }
        printf("\n"); 
    }
    printf("\n"); 

    // output
    // 11111
    // 0000
    // 111
    // 00
    // 1


    for (int i=1;i<=5;i++)
    {
        for (int j=5;j>=i;j--)
        {
            printf("%d",j%2);
        }
        printf("\n"); 
    }
    printf("\n"); 
    // output
    // 10101
    // 1010
    // 101
    // 10
    // 1

     for (int i=1;i<=5;i++)
    {
        for (int k=5;k>=i;k--)
        {
            printf(" ");
        }
        for (int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n"); 
    }
    printf("\n"); 
    // output
    //      1
    //     12
    //    123
    //   1234
    //  12345


    char alphabet='A';
    for (int i=5;i>=1;i--)
    {
        for (int k=1;k<=i;k++)
        {
            printf(" ");
        }
        for (int j=1;j<=i;j++)
        {
            printf("%C",alphabet);
            alphabet++;
        }
        printf("\n"); 
    }
    printf("\n"); 
    // output
    //      ABCDE
    //     FGHI
    //    JKL
    //   MN
    //  O

}
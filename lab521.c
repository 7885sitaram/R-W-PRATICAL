//  Write a Program to find the minimum number from the given 3 numbers using nested if else

#include<stdio.h>

int main(){

    float a , b , c , result ;

    printf("enter a value for first number \n ");
    scanf("%f", &a);

    printf("enter a value for second number \n ");
    scanf("%f", &b);

    printf("enter a value for third number \n  ");
    scanf("%f", &c);

    if (a<b)
    {
        if (a <c)
        {
            printf(" minimum value among %.2f,%.2f,%.2f is %.2f", a, b, c, a);
        }

        else{
             printf(" minimum value among %.2f,%.2f,%.2f is %.2f", a, b, c, c);
        }
        
    }

    else{

        if (b<c)
        {
             printf(" minimum value among %.2f,%.2f,%.2f is %.2f", a, b, c, b);
        }

        else{
             printf(" minimum value among %.2f,%.2f,%.2f is %.2f", a, b, c, c);
        }
        
    }
    
    return 0;
}
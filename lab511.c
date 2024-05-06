// write a program to find minimum number from given 2 number using if else 

#include<stdio.h>

int main(){


    float a , b  ;

    printf("enter a value for first number \n ");
    scanf("%f", &a);

    printf("enter a value for second number \n ");
    scanf("%f", &b);

    if (a < b)
    {
        printf(" minimum value among %.2f,%.2f is %.2f", a, b, a);
    }
    else{
        
        printf(" minimum value among %.2f,%.2f is %.2f", a, b, b);
    }
    

    return 0;

}

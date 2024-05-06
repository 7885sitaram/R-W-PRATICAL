// write a program to swap 2 variable without using third variable 

#include<stdio.h>

int main(){

    int a , b ;

    printf("Enter your first number  ");
    scanf("%d", &a);

    printf("Enter your second number  ");
    scanf("%d", &b);

    printf("Before swapping the value %d %d \n", a, b);

    a = a + b ;
    b = a - b ;
    a = a - b ;

    // second method 
    // a = a * b ;
    // b = a / b ;
    // a = a / b;



    printf("After swapping the value %d %d", a , b);

    return 0;


}
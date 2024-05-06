// write a program to swap 2 variable using third variable 

#include<stdio.h>

int main(){

    int a , b, temp ;

    printf("Enter your first number  ");
    scanf("%d", &a);

    printf("Enter your second number  ");
    scanf("%d", &b);

    printf("Before swapping the value %d %d \n", a, b);

    temp = a;
    a = b ;
    b = temp ;

    printf("After swapping the value %d %d", a , b);

    return 0;


}
/*Q.1 Write a Program to find the minimum number from the given 3 numbers using the ternary operator.*/

#include <stdio.h>

int main(){

    float a , b , c , result ;

    printf("enter a value for first number \n ");
    scanf("%f", &a);

    printf("enter a value for second number \n ");
    scanf("%f", &b);

    printf("enter a value for third number \n  ");
    scanf("%f", &c);

    result = (a<b)?(a<c? a:c):((b<c ? b:c));

    printf(" minimum value among %.2f,%.2f,%.2f is %.2f", a, b, c, result);

    return 0;


}
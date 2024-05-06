// (x + y)^3

#include<stdio.h>
#include<math.h>

int main(){

    float x , y , result ;

    printf("Enter your first number  ");
    scanf("%f", &x);

    printf("Enter your second number  ");
    scanf("%f", &y);

    result = pow(x,3) + 3*pow(x,2)*y + 3*x*pow(y,2) + pow(y,3);

    printf("The ans of this formula is %f", result);

    return 0;

    
}
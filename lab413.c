// (x + y)^2

#include<stdio.h>
#include<math.h>

int main(){

    float x , y , result ;

    printf("Enter your first number  ");
    scanf("%f", &x);

    printf("Enter your second number  ");
    scanf("%f", &y);

    result = pow(x,2) + 2*x*y + pow(y,2);

    printf("The ans of this formula is %f", result);

    return 0;

    
}
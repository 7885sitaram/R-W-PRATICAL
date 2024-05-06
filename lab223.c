//  wap for find area of triangle

#include<stdio.h>

int main(){

    float h,b , result ;

    printf("Enter the height ");
    scanf("%f", &h);

    
    printf("Enter the base ");
    scanf("%f", &b);

    result = 0.5*h*b;

    printf("Area of triangle is %f", result);

    

    return 0;

    
}
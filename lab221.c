//  wap for find area of circle

#include<stdio.h>
#define pi 3.14


int main(){

    float r , result ;

    printf("Enter the radious ");
    scanf("%f", &r);

    result = pi*r*r;

    printf("Area of circle is %f", result);

    

    return 0;

    
}
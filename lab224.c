//  wap for find area of simple interest

#include<stdio.h>

int main(){

    float p,t,r , result ;

    printf("Enter the principalce ");
    scanf("%f", &p);

    
    printf("Enter the time ");
    scanf("%f", &t);

    printf("Enter the rate ");
    scanf("%f", &r);

    result = (p*t*r)/100;

    printf("Simple interest is %f", result);

    

    return 0;

    
}
//  wap for find perimeter of circle

#include<stdio.h>
#define pi 3.14


int main(){

    float r , result ;

    printf("Enter the radious ");
    scanf("%f", &r);

    result = 2*pi*r;

    printf("Perimeter of circle is %f", result);

    

    return 0;

    
}
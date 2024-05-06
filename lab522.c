// Write a Program to find the maximum number from the given 4 numbers using nested if else


#include<stdio.h>

int main(){

    float a , b , c ,d ;

    printf("enter a value for first number \n ");
    scanf("%f", &a);

    printf("enter a value for second number \n ");
    scanf("%f", &b);

    printf("enter a value for third number \n  ");
    scanf("%f", &c);

    printf("enter a value for fourth number \n  ");
    scanf("%f", &d);

    if (a >b)
    {
        if (a> c)
        {
            if (a>d)
            {
                printf(" minimum value among %.2f,%.2f,%.2f,%.2f is %.2f", a, b, c, d, a);
            }
            else{
                printf(" minimum value among %.2f,%.2f,%.2f,%.2f is %.2f", a, b, c, d, d);
            }
            
        }
        else{
            if (c > d)
            {
                 printf(" minimum value among %.2f,%.2f,%.2f,%.2f is %.2f", a, b, c, d, c);
            }
            else{
                 printf(" minimum value among %.2f,%.2f,%.2f,%.2f is %.2f", a, b, c, d, d);
            }
        }
        
    }

    else{

        if (b > c)
        {
            if (b>d)
            {
                 printf(" minimum value among %.2f,%.2f,%.2f,%.2f is %.2f", a, b, c, d, b);
            }
            else{
                 printf(" minimum value among %.2f,%.2f,%.2f,%.2f is %.2f", a, b, c, d, d);
            }
        }
        else{
            if (c > d)
            {
                 printf(" minimum value among %.2f,%.2f,%.2f,%.2f is %.2f", a, b, c, d, c);
            }
            else{
                 printf(" minimum value among %.2f,%.2f,%.2f,%.2f is %.2f", a, b, c, d, d);
            }
            
        }
        
    }

    return 0;

}
    

 
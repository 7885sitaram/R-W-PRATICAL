// write a program to find netural or not using ladder if else

#include<stdio.h>

int main(){

    int n;

    printf("Enter your number ");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("The number %d is Positive ", n);
    }

    else if (n < 0)
    {
         printf("The number %d is Negetive ", n);
    }

    else{

         printf("The number %d is Neutral ", n);
    }
    
    return 0;
}
// Write a Program to create a menu-driven program for Telecom call service conversation using nested switch case.


#include<stdio.h>

int main(){

    int ch , ch2 , ch3 , ch4 , chs;

    printf("***** welcome to Telecom call service ***** \n");


    printf("Press 1 for English \n");
    printf("Press 2 for Hindi \n");
    printf("Press 3 for Gujarati \n");
    printf("\n");

    printf("Please Enter your choice: ");
    scanf("%d", &chs);


    switch (chs)
    {
    case 1:

    printf("Press 1 for Internet Recharge \n");
    printf("Press 2 for Top-up Recharge \n");
    printf("Press 3 for Special Recharge \n");

    printf("Please Enter your choice: ");
    scanf("%d", &ch); 

    printf("\n");

    switch (ch)
    {

    case 1:
    printf(" You have successfully done a Internet Recharge ");
        break;

    case 2:
      printf(" You have successfully done a Top-up Recharge ");
        break;

    case 3:
        printf(" You have successfully done a Special Recharge ");
        break;
    
    default:
     printf("Invalid choice try again");
        break;
    }

        break;


    case 2:

    printf("Internet Recharge ke liye 1 dabaiye \n");
    printf("Top-up Recharge ke liye 2 dabaiye \n");
    printf("Special Recharge ke liye 3 dabaiye \n");

    printf("Please Enter your choice: ");
    scanf("%d", &ch2);

    printf("\n");


    switch (ch2)
    {

    case 1:
    printf(" Aapne safaltapurvak Internet Recharge kar liya he. ");
        break;

    case 2:
      printf(" Aapne safaltapurvak Top-up Rechargekar liya he. ");
        break;

    case 3:
        printf(" Aapne safaltapurvak Special Recharge kar liya he.");
        break;
    
    default:
     printf("Invalid choice try again");
        break;
    }

        break;


    case 3:

    printf("Internet Recharge mate 1 dabavo \n");
    printf("Top-up Recharge mate 2 dabavo \n");
    printf("Special Recharge mate 3 dabavo \n");

    printf("Please Enter your choice: ");
    scanf("%d", &ch3);

    printf("\n");

    
    switch (ch3)
    {

    case 1:
    printf("Tame safaltapurvak Internet Recharge karyu chhe.  ");
        break;

    case 2:
      printf("Tame safaltapurvak Top-up Recharge karyu chhe. ");
        break;

    case 3:
        printf("Tame safaltapurvak Special Recharge karyu chhe.");
        break;
    
    default:
     printf("Invalid choice try again");
        break;
    }

        break;

    default:
     printf("Invalid choice try again");
        break;
    }


    return 0;

}


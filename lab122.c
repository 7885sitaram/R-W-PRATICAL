#include <stdio.h>

int main()
{

    int i, j;

    for (i = 1; i <= 8; i++)
    {
        for (j = 1; j <= 8; j++)
        {
            if (i == 1)
            {
                printf(" -");
            }
        }
    }

    printf("\n");

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 8; j++)
        {

            if (j == i)
            {
                if (i == 2)
                {
                    printf("R");
                }

                else if (i == 3)
                {
                    printf("N");
                }

                else if (i == 4)
                {
                    printf("W");
                }
                else
                {
                    printf("|");
                }
            }

            if (j == 5)
            {
                printf("              |");
            }
        }

        printf("\n");
    }

    for (i = 1; i <= 8; i++)
    {
        for (j = 1; j <= 8; j++)
        {
            if (i == 1)
            {
                printf(" -");
            }
        }
    }

    return 0;
}
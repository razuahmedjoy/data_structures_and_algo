#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){

        for (int j = 1; j < n - i; j++)
        {
            printf(" ");
        }
        if (i % 2 == 0)
        {

            for (int j = 1; j <= 2 * (i + 1) - 1; j++)
            {
                printf("#");
            }
        }
        else
        {
            for (int j = 1; j <= (i + 1) * 2 - 1; j++)
            {
                printf("-");
            }
        }

        for (int j = 1; j < n - i; j++)
        {
            printf(" ");
        }
        printf("\n");
    }

    for(int i = n-1;i>=1;i--){
        for (int j = 1; j < n - i + 1; j++)
        {
            printf(" ");
        }
        if (i % 2 == 1)
        {

            for (int j = 1; j <= 2 * (i) - 1; j++)
            {
                printf("#");
            }
        }
        else
        {
            for (int j = 1; j <= (i) * 2 - 1; j++)
            {
                printf("-");
            }
        }

        for (int j = 1; j < n - i + 1; j++)
        {
            printf(" ");
        }
        printf("\n");
    }


}
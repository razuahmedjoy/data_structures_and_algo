#include <stdio.h>

int main()
{

    int correct_pass = 1999;
    int pass;
    // take input while End of File (EOF) is not reached
    while (scanf("%d", &pass) != EOF)
    {

        if (pass == correct_pass)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}
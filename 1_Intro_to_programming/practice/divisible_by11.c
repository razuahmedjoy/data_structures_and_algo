#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    char num[1000];
    scanf("%s", num);

    int oddPositionSum = 0;
    int evenPositionSum = 0;

    int length = strlen(num);

    for (int i = length - 1; i >= 0; i--)
    {
        if (i % 2 == 0)
        {
            oddPositionSum += num[i] - '0';
        }
        else
        {
            evenPositionSum += num[i] - '0';
        }
    }
    int absDiff = abs(oddPositionSum - evenPositionSum);

    if (absDiff % 11 == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
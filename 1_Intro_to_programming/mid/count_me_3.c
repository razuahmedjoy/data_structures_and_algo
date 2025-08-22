#include <stdio.h>

int main()
{
    char s[10001];
    scanf("%s", s);
    int alphabetcounts[30] = {0};

    for (int i = 0; s[i] != '\0'; i++)
    {
    
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            alphabetcounts[s[i] - 'a']++;
        }
   
    }

    for (int i = 0; i < 30; i++)
    {
        if (alphabetcounts[i] > 0)
        {
            printf("%c - %d\n", 'a' + i, alphabetcounts[i]);
        }
    }

    return 0;
}
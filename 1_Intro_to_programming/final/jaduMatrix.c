#include <stdio.h>

int main()
{

    int n, m;
    scanf("%d %d", &n, &m);
    int a[n][m];
    int isJadumatrix = 1;
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            scanf("%d", &a[i][j]);
            if (i == j && a[i][j] != 1)
            {
                isJadumatrix = 0;
            }
            if (i + j == n - 1 && a[i][j] != 1)
            {
                isJadumatrix = 0;
            }
            if (i != j && i + j != n - 1 && a[i][j] != 0)
            {
                isJadumatrix = 0;
            }
            total += a[i][j];
        }
    }

    int checktotal = 0;
    if(n % 2 == 0){
        checktotal = n+m;
    }else{
        checktotal = n+m-1;
        
    }

    if (isJadumatrix && total == checktotal && n == m)
    {
        printf("YES\n");

    }
    else
    {
        printf("NO\n");


    }

    return 0;
}
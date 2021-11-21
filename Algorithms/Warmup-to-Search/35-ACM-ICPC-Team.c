#include <stdio.h>
#include <string.h>
int main()
{
    int n, m, i, j, k, p = 0, r = 0, q = 0;
    scanf("%d%d", &n, &m);
    char a[n][m];
    for (i = 0; i < n; i++)
        scanf("%s", &a[i]);
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            p = 0;
            for (k = 0; k < m; k++)
            {
                if (a[i][k] == '1' || a[j][k] == '1')
                    p++;
            }
            if (p == q)
                r++;
            else if (q < p)
            {
                q = p;
                r = 1;
            }
        }
    }
    printf("%d\n%d", q, r);
    return 0;
}
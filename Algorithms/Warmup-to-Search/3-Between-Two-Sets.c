#include <stdio.h>
int main()
{
    int n, m, i, j = 0, k, number = 0, p = 0, x;
    scanf("%d%d", &n, &m);
    int a[n], b[m];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < m; i++)
        scanf("%d", &b[i]);
    x = a[n - 1];
    int c[100];
    while (x <= b[0])
    {
        for (i = 0; i < n; i++)
        {
            if (x % a[i] == 0)
                p = 1;
            else
            {
                p = 0;
                break;
            }
        }
        if (p == 1)
        {
            c[j] = x;
            j++;
        }
        x++;
    }
    for (i = 0; i < j; i++)
    {
        for (k = 0; k < m; k++)
        {
            if (b[k] % c[i] == 0)
                p = 1;
            else
            {
                p = 0;
                break;
            }
        }
        if (p == 1)
            number++;
    }
    printf("%d", number);
    return 0;
}
#include <stdio.h>
int main()
{
    int n, i, min, p = 0, j, k;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    while (1)
    {
        for (k = 0; k < n; k++)
        {
            if (a[k] > 0)
            {
                min = a[k];
                printf("proiv");
                break;
            }
        }
        for (j = k; j < n; j++)
        {
            if (min > a[j] && a[j] > 0)
            {
                min = a[j];
            }
        }
        if ((n - p) != 0)
            printf("%d\n", n - p);
        else
        {
            break;
        }
        for (i = 0; i < n; i++)
        {
            a[i] = a[i] - min;
            if (a[i] == 0)
                p++;
        }
    }
    return 0;
}
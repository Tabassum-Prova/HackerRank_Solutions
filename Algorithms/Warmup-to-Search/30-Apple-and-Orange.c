#include <stdio.h>
int main()
{
    int s, t, a, b, m, n, x, apple = 0, orange = 0;
    scanf("%d%d", &s, &t);
    scanf("%d%d", &a, &b);
    scanf("%d%d", &m, &n);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &x);
        if (x + a >= s && x + a <= t)
        {
            apple++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (x + b >= s && x + b <= t)
        {
            orange++;
        }
    }
    printf("%d\n%d", apple, orange);
    return 0;
}
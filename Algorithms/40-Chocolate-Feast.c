#include <stdio.h>
int main()
{
    int n, c, m, p, q, r, t, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d%d%d", &n, &c, &m);
        p = n / c;
        r = p;
        while (1)
        {
            if (r >= m)
            {
                q = r / m;
                r = r % m + q;
                p = p + q;
            }
            else
            {
                break;
            }
        }
        printf("%d\n", p);
    }
    return 0;
}
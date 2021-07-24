#include <stdio.h>
int main()
{
    int t, i, dig, p = 0;
    long long int n, x;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%lld", &n);
        x = n;
        while (n != 0)
        {
            dig = n % 10;
            if (dig != 0)
            {
                if (x % dig == 0)
                    p++;
            }
            n = n / 10;
        }
        printf("%d\n", p);
        p = 0;
    }
    return 0;
}
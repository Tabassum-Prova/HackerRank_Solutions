#include <stdio.h>
int main()
{
    int t, i;
    long long b, w, bc, wc, z;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%lld %lld", &b, &w);
        scanf("%lld %lld %lld", &bc, &wc, &z);
        long long p1 = b * bc + w * wc;
        long long p2 = b * (wc + z) + w * wc;
        long long p3 = b * bc + w * (bc + z);
        if (p1 < p2 && p1 < p3)

            printf("%lld\n", p1);
        else if (p2 < p1 && p2 < p3)
            printf("%lld\n", p2);
        else
        {
            printf("%lld\n", p3);
        }
    }
    return 0;
}
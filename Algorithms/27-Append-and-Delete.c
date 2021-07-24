#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    int k, i, x, y, p = 0, q;
    scanf("%s", a);
    scanf("%s", b);
    scanf("%d", &k);
    x = strlen(a);
    y = strlen(b);
    if (x > y)
        q = x;
    else
        q = y;
    for (i = 0; i < q; i++)
    {
        if (a[i] == b[i])
            p++;
        else
            break;
    }
    if (x + y <= k)
        printf("Yes");
    else if (k - (x + y - 2 * p) >= 0)
    {
        if ((k - (x + y - 2 * p)) % 2 == 0)
            printf("Yes");
        else
            printf("No");
    }
    else
    {
        printf("No");
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf(" %d", &n);
    int c[n];
    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &c[i]);
    }
    int currentPosition = 0;
    int lastCloud = n - 1;
    int jumps = 0;
    while (currentPosition < lastCloud)
    {
        if (currentPosition + 1 == lastCloud)
            currentPosition++;
        else if (c[currentPosition + 2] == 0)
            currentPosition = currentPosition + 2;
        else
            currentPosition++;
        jumps++;
    }
    printf("%d\n", jumps);
    return 0;
}
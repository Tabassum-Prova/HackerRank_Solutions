#include <stdio.h>
int main() {

    int i, n, k, max =0, h;
    scanf("%d %d", &n, &k);
    int height[n];

    for(i=0; i<n; i++) {
        scanf("%d", &height[i]);
        if(max < height[i]) {
            max = height[i];
        }
    }

    if(max < k) {
        printf("%d", 0);
    }else {
        printf("%d", max-k);
    }

    return 0;
}
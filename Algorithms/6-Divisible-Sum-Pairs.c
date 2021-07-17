#include <stdio.h>
int main(){

    int k, i, j, n, count = 0;
    scanf("%d %d", &n, &k);
    int arr[n];

    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++) {
        for (j=i+1; j<n; j++) {

            if((arr[i] + arr[j]) % k == 0) {

                count++;
            }
        }
    }

    printf("%d", count);

    return 0;
}
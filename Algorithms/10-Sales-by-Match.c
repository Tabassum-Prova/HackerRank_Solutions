#include <stdio.h>
int main(){

    int n, i, j, arr[101] = {0}, pair=0;
    scanf("%d", &n);

    for(i=0; i<n; i++) {
        scanf("%d", &j);
        arr[j]++;
        
    }

    for(i=0; i<101; i++) {
        pair  += arr[i] / 2;
    }

    printf("%d", pair);


    return 0;
}
#include <stdio.h>
int main(){

    int i, j, d, m, n ,sum, bar=0;
    scanf("%d", &n);
    int s[n];

    for(i=0; i<n; i++) {
        scanf("%d", &s[i]);
    }
    scanf("%d %d", &d, &m);

    for(i=0; i<n; i++) {
        sum = 0;

        for(j=0; j<m; j++) {
            sum += s[i+j]
        }

        if(sum == d) {
            bar++;
        }
    }

    printf("%d", bar);
    

    return 0;
}
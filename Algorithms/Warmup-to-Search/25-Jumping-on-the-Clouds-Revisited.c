#include <stdio.h>
int main(){

    int e=100, n, k, j;

    scanf("%d %d", &n, &k);
    int c[n];
    int i=k%n;


    for(j=0; j<n; j++) {
        scanf("%d", &c[j]);
        
    }

    e -= c[i] * 2 + 1 ;
    while(i != 0){
        i = (i + k) % n;
        e -= c[i] * 2 + 1;
    }
    

    printf("%d",e);

    return 0;
}
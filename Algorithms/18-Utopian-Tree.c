#include <stdio.h>
int main(){

    int i, j, t, n, arr[60];

    scanf("%d", &t);
    for(i=1; i<=t; i++) { 

        for(j=0; j<=60; j++) {
            if(j==0) {
                arr[j] = 1;
            }else if(j %2 == 1) {
                arr[j] = (arr[j-1]) * 2;
            }else if(j%2 == 0) {
                arr[j] = (arr[j-1]) +1;
            }
        }

        scanf("%d", &n);
        
        for(j=0; j<=60; j++) {
            
            if(j==n) {
                printf("%d\n", arr[j]);
            }
            
            
        }
    }

    return 0;
}
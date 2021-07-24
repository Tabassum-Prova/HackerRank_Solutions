#include <stdio.h>
int main(){

    int day, i, j, s, l, c=0, n, f=5;
    scanf("%d", &n);

    for(i=0; i<n; i++) {

        if(i != 0) {
            f = (f/2) * 3;
        }
        
        l = f/2;
        c += l;
    }

    printf("%d", c);

    return 0;
}
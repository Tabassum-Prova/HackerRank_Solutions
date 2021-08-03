#include <stdio.h>
int main(){

    int n, i, x;
    scanf("%d", &n);

    for(i=1; i<11; i++){
        x = i*n;
        printf("%d x %d = %d\n", n, i, x);
    }


    return 0;
}
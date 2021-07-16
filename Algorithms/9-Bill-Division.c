#include <stdio.h>
int main(){

    int i, j, k, n, b, sum=0, total = 0;
    scanf("%d", &n);
    int bill[n];
    scanf("%d", &k);

    for(i=0; i<n; i++) {
        scanf("%d", &bill[i]);
    }

    scanf("%d", &b);

    for(i=0; i<n; i++) {
        if(i != k) {
            sum+=bill[i];
        }
    }

    total = sum / 2;
   
   if(total == b) {
       printf("Bon Appetit\n");
   }else {
       printf("%d", b-total);
   }
   

    return 0;
}
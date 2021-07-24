#include <stdio.h>
int main(){

    int q, a, b, i, p, total;
    scanf("%d", &q);

    while(q--){
        scanf("%d %d", &a, &b);
        total = 0;
       
        for(i=1; i<b; i++){
            p = i*i;
            if(p>=a && p<=b){
                total++;
            }
        }
        printf("%d",total);
    }

    

    return 0;
}
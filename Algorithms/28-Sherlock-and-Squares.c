#include <stdio.h>
#include <math.h>
int main(){

    int q, i, p, total;
    long long a,b;
    scanf("%d", &q);

    while(q--){
        scanf("%lld %lld", &a, &b);
        total = 0;
       
        for(i=sqrt(a); i<=sqrt(b); i++){
            p = i*i;
            if(p>=a && p<=b){
                total++;
            }
        }
        printf("%d\n",total);
    }

    

    return 0;
}
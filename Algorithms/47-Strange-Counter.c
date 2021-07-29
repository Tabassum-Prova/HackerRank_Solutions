#include <stdio.h>
int main(){

    long int t, v=3;
    scanf("%ld", &t);

    while(t>v){
        t-=v;
        v*=2;
    }

    printf("%lld",v-t+1);

    return 0;
}
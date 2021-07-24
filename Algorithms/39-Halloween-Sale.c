#include <stdio.h>
int main(){

    int m, d, s, p, sum=0,count=0;
    scanf("%d %d %d %d", &p, &d, &m, &s);

    while(1){

        sum+=p;
        int det = sum;
        count++;
        if(count < m){
            p-=d;
        }else{
            p=m;
        }if(det+m>=s){
            break;
        }


    }

    printf("%d", count);

    return 0;
}
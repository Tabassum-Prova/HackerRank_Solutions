#include <stdio.h>
int main(){

    int m, d, s, p, sum=0,count=0;
    scanf("%d %d %d %d", &p, &d, &m, &s);

    while(1){

        sum+=p;
        if(sum<=s){

            count++;
            if(p-d>=m){
                p-=d;
            }else{
                p=m;
            }

        }else{
            break;
        }


    }

    printf("%d", count);

    return 0;
}
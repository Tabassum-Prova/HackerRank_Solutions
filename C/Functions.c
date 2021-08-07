#include <stdio.h>

int max_of_four(int a, int b, int c, int d){
    int max=0, i;

    for(i=1; i<5; i++){
        if(a>max){
            max=a;
        }else if(b>max){
            max=b;
        }else if(c>max){
            max=c;
        }else if(d>max){
            max=d;
        }
    }
    return max;
}

int main(){

    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
#include <stdio.h>
int main() {

    int x1,v1,x2,v2,k,p=0;

    scanf("%d %d %d %d", &x1, &v1, &x2, &v2);

    while(x1<10000){
        x1=x1+v1;
        x2=x2+v2;

        if(x1 == x2) {
            k=1;
            break;
        }
    }

    if(k==1) {
        printf("YES");
    }else {
        printf("NO");
    }

    return 0;
}
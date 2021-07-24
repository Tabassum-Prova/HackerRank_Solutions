#include <stdio.h>
int main(){

    int d1, m1, y1, d2, m2, y2;

    scanf("%d %d %d", &d1, &m1, &y1);
    scanf("%d %d %d", &d2, &m2, &y2);

    if(y2<y1){
        printf("10000");
    }else if(m2<m1 && y1==y2){
        printf("%d", 500*(m1-m2));
    }else if(d2<d1 && m1==m2 && y1==y2){
        printf("%d", 15*(d1-d2));
    }else{
        printf("0");
    }

    return 0;
}
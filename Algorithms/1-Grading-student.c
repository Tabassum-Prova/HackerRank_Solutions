#include <stdio.h>
int main(){

    int n,i,grade,grd,j,k=5;
    scanf("%d", &n);

    for(i=1; i<=n; i++) {
        scanf("%d", &grade);

        if(grade < 38) {
            printf("%d\n", grade);
        }else {
            grd = (grade/5 +1) * 5;
            if(grd - grade < 3) {
                printf("%d\n", grd);
            }else {
                printf("%d\n", grade);
            }
        }

    }
}
#include <stdio.h>
int main(){

    int i, j, x, y, z, n;
    scanf("%d", &n);

    for(i=1; i<=n; i++) {
        scanf("%d %d %d", &x, &y, &z);

        int count = 0;
        if(x<=z){
            for(j=x; j<z; j++) {
            count++;
            }
        }else {
            count = x-z;
        }
        

        int count1 = 0;

        if(y<=z) {
            for(j =y; j<z; j++) {
            count1++;
            }
        }else {
            count1 = y-z;
        }
        
        if(count>count1) {
            printf("Cat B\n");
        }else if(count<count1) {
            printf("Cat A\n");
        }else if(count==count1) {
            printf("Mouse C\n");
        }
    }

    return 0;
}
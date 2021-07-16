#include <stdio.h>
int main(){

    int b, n, m, i, j, board, usb, cost;
    scanf("%d %d %d", &b, &n, &m);
    int key[n], us[m];

    for(i=0; i<n; i++) {
        scanf("%d", &key[i]);
        if(i+1 == n) {
            board = key[i];
        }
    }

    for(i=0; i<m; i++) {
        scanf("%d", &us[m]);
        if(i+1 == m) {
            usb = us[m];
        }
    }

    cost = board + usb;

    if(cost < b) {
        printf("%d", cost);
    }else {
        printf("%d", -1);
    }
    
    return 0;
}
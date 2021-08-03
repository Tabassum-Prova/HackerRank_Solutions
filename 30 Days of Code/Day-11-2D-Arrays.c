#include <stdio.h>
int main(){

    int arr[6][6];
    int i, j;

    for(i=0; i<6; i++){
        for(j=0; j<6; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for(i=0; i<6; i++){
        for(j=0; j<6; j++){
            printf("%d", arr[i][j]);
        }
    }

    return 0;
}
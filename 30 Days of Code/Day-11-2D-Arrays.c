#include <stdio.h>
int main(){

    int arr[6][6];
    int i, j, sum=0, max=0;

    for(i=0; i<6; i++){
        for(j=0; j<6; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for(i=1; i<5; i++){
        for(j=1; j<5; j++){
            sum = arr[i][j]+arr[i-1][j-1]+arr[i-1][j+1]+arr[i+1][j-1]+arr[i+1][j+1]+arr[i+1][j]+arr[i-1][j];
            if(sum>max){
                max=sum;
            }
        }
    }

    printf("%d", max);

    return 0;
}
#include <stdio.h>
int main(){

    int i, j, n, p, temp;
    scanf("%d", &n);
    int arr[n];

    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    p=arr[0];

    for(i=0; i<n; i++){
        if(p>arr[i]){
            for(j=i; j>0; j--){
                temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1]=temp;
            }
        }
    }

    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
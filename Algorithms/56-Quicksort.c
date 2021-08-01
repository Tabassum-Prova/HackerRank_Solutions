#include <stdio.h>
int main(){

    int p, l, r, i, j, n, t=0, k;
    scanf("%d", &n);
    int arr[n], arr1[n];

    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    p = arr[0];

    for(i=0; i<n; i++){
        if(arr[i]<p){
            t++;
        }
    }

    i=0;
    j=0;
    k = n-1;
    r=n;
    while(i==n){
        if(arr[i]<p){
            arr1[j]=arr[i];
            i++;
            j++;
        }else{
            arr1[r-1]=arr[i];
            i++;
            r--;
        }
    }

    for(j=0; j<n; j++){
        printf("%d", arr1[j]);
    }

    return 0;
}
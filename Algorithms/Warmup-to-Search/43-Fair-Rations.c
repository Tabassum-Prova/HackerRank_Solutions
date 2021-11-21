#include <stdio.h>
int main(){

    int b, n, i, l=0;

    scanf("%d", &n);
    int arr[n];

    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n-1; i++){
        if(arr[i] % 2 == 1){
            arr[i]= arr[i] + 1;
            arr[i+1] = arr[i+1] +1;
            l+=2;
        }
    }
    if(arr[n-1]%2==1){
        printf("NO");
    }else{
        printf("%d", l);
    } 

    return 0;
}
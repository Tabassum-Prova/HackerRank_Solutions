#include <stdio.h>
int main(){

    int n, t, i, j, k, a, b;

    scanf("%d %d", &n, &t);
    int arr[n];

    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    while(t--){
        scanf("%d %d", &a, &b);

        int min=arr[a];

        for(i=a; i<=b; i++){
            
            if(min>arr[i]){
                min=arr[i];
            }
        }
        printf("%d\n", min);

    }


    return 0;
}
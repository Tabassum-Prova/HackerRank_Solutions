#include <stdio.h>
int main(){

    int p, i, j, n, x;
    scanf("%d", &n);
    int arr[n];

    

    for(i=1; i<=n; i++){
        scanf("%d", &arr[i]);
       
    }

    for(x=1; x<=n; x++){
        for(i=1; i<=n; i++){
            if(arr[arr[i]]==x){
                printf("%d\n", i);
                break;
            }
        }
    }

    return 0;
}
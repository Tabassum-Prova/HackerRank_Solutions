#include <stdio.h>
int main(){
    int v, n, i;
    scanf("%d %d", &v, &n);
    int arr[n];
    
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    
    }
    for(i=0; i<n; i++){
        if(arr[i]==v){
            printf("%d", i);
            break;
        }
    }
    
    return 0;
}
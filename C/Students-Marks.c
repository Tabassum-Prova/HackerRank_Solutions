#include <stdio.h>
int main(){

    int n, i, j, sum=0;
    scanf("%d", &n);
    int arr[n];
    char t;

    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    
    scanf(" %c", &t);aaa
 

    if(t=='b'){
        for(i=0; i<n; i++){
            if(i%2==0){
                sum+=arr[i];
            }
        }
    }else if(t=='g'){
        for(i=0; i<n; i++){
            if(i%2==1){
                sum+=arr[i];
            }
        }
    }

    printf("%d", sum);

    return 0;
}
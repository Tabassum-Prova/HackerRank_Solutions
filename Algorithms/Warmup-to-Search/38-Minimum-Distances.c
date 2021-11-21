#include <stdio.h>
int main(){

    int n, i, j, min=0, d,l,k,p=0;
    scanf("%d", &n);
    int a[n];

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(a[i]==a[j]){
                d = j-i;
                if(p==0){
                    min = d;
                    p=1;
                }if(d<min){
                    min=d;
                }
            }
        }
    }

    if(min==0){
        printf("%d", -1);
    }else{
        printf("%d", min);
    }

    return 0;
}
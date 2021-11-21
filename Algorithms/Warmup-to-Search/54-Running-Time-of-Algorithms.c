#include <stdio.h>
int main(){

    int n, i, j, count=0, temp;
    scanf("%d", &n);
    int v[n];

    for(i=0; i<n; i++){
        scanf("%d", &v[i]);
    }

    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(v[i]>v[j]){
                count++;
            }
        }
    }

    printf("%d", count);

    return 0;
}
#include <stdio.h>
int main(){

    int s, i, j, min,temp;
    scanf("%d",&s);
    int v[s];

    for(i=0; i<s; i++){
        scanf("%d", &v[i]);
    }

    

    for(i=0; i<s; i++){
        for(j=i+1; j<s; j++){
            if(v[i]>v[j]){
                temp=v[i];
                v[i]=v[j];
                v[j]=temp;
            }
        }
    }

    for(i=0; i<s; i++){
        printf("%d ", v[i]);
    }

    return 0;
}
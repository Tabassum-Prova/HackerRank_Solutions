#include <stdio.h>
int main(){

    int n, i, lc=0, uc=0, sc=0, d=0, more=0;
    scanf("%d", &n);
    int arr[n];
    scanf("%s", &arr);

    for(i=0; i<n; i++){
        if(arr[i]>='A' && arr[i]<='Z'){
            up=1;
        }else if(arr[i] >='a' && arr[i]<='z'){
            lc=1;
        }else if(arr[i]>=0 && arr[i]<=9){
            d=1;
        }else{
            sc=1;
        }
    }

    if(sc==0){
        more++;
    }if(lc==0){
        more++;
    }if(uc==0){
        more++;
    }if(d==0){
        more++;
    }

    if(n<6){
        if(6-n > more){
            printf("%d", 6-n);
        }else{
            printf("%d", more);
        }
    }else{
        printf("%d", more);
    }

    return 0;
}
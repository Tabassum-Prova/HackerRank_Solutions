#include <stdio.h>
int main(){

    int n, count=0, result=0, rem;
    scanf("%d", &n);

    while(n>0){
        rem = n%2;
        n/=2;
        if(rem==1){
            count++;
            if(count>result){
                result = count;
            }
        }else{
            count =0;
        } 
    }

    printf("%d", result);

    return 0;
}
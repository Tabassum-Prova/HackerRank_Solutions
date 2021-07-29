#include <stdio.h>
#include <string.h>
int main(){

    char s[100001];
    int x,i,count=1;
    scanf("%s", &s);
    x=strlen(s);
    for(i=0; i<x; i++){
        if(s[i]>=65 && s[i]<=90){
            count++;
        }
    }

    printf("%d",count);

    


    return 0;
}
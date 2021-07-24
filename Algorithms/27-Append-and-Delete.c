#include <stdio.h>
#include <string.h>
int main(){

    int i, j, k,n;
    char s[100], t[100];
    scanf("%s %s",s,t);
    scanf("%d",&k);
    n = strlen(s);
    
    if(n%k==0){
        printf("NO");
    }else{
        printf("YES");
    }

    return 0;
}
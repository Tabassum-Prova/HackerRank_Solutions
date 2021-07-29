#include <stdio.h>
int main(){

    int n, i, j;
    char s[101];
    int k;

    scanf("%d", &n);
    scanf("%s", &s);
    scanf("%d", &k);
    for(i=0; i<n; i++){
        if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122)){
            s[i]+=k;
        }
    }

    for(i=0; i<n; i++){
        printf("%s", s[i]);
    }

    return 0;
}
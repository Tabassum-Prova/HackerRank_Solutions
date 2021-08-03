#include <stdio.h>
#include <string.h>
int main(){

    int t, i, j;
    char s[10001];
    scanf("%d", &t);

    while(t--){
        scanf("%s", s);
        int m = strlen(s);

        for(i=0; i<m; i++){
            if(i==0 || i%2==0){
                printf("%c", s[i]);
            }
        }

        printf(" ");

        for(i=1; i<m; i++){
            if(i%2==1){
                printf("%c", s[i]);
            }
        }
        
        printf("\n");

    }

    return 0;
}
#include <stdio.h>
#include <string.h>
int main(){

    int i, d;
    char s[1001];

    scanf("%[^\n]", &s);
    d = strlen(s);

    for(i=0; i<d; i++){
        if(s[i]==' '){
            printf("\n");
        }else{
            printf("%c", s[i]);
        }
        
    }

    return 0;
}
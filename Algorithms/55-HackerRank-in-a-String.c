#include <stdio.h>
#include <string.h>
int main(){

    int i, j, k, count, n, t;
    char s[] = "hackerrank";
    t = strlen(s);
    scanf("%d",&k);

    while(k--){
        char pro[10000];
        scanf("%s",pro);
        n=strlen(pro);
        count=0;
        j=0;
        for(i=0; i<n; i++){
            if(pro[i]==s[j]){
                count++;
                j++;
            }
        }

        if(count==10){
            printf("YES");
        }else{
            printf("NO");
        }
    }
    

    return 0;
}
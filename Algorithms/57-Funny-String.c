#include <stdio.h>
#include <string.h>
int main(){

    int n, i, j, t, l;
    char q[10001], p[10001];
    scanf("%d", &l);
    int s[10001], r[10001];

    while(l--){
        scanf("%s", q);
        t = strlen(q);
        
        int k=0;
        for(i=1,j=0; i<t; i++,j++){
            k = abs((int)q[i]-(int)q[i-1]);
            s[j]=k;
        }

        int c=0;
        for(i=t-1,j=0; i>0; i--,j++){
            // printf("i:%d i-1:%d", p[i], p[i-1]);
            c = abs((int)q[i]-(int)q[i-1]);
            r[j]=c;
        }

        int m = sizeof(r)/4;
        int flag =0;

        for(i=0; i<m; i++){
            if(s[i]!=r[i]){
                flag=1;
                break;
            }
        }

        if(flag == 0){
            printf("Funny\n");
        }else if(flag==1){
            printf("Not Funny\n");
        }
    }

    return 0;
}

#include <stdio.h>
int main(){

    int g, n, i, j, k;

    scanf("%d", &g);
    

    while(g--){
        int p=1, q=0;
        scanf("%d", &n);
        char a[n], b, temp;
        scanf("%s", a);
       
        for(i=0; i<n; i++){
            if((a[i]==a[i+1] || a[i]==a[i-1]) && p==1){
                p=1;
            }else{
                p=0;
            }if(a[i]=='_'){
                q=1;
            }
        }

        if(p==1 && q==1){
            printf("YES\n");
        }else if(p==0 && q==0){
            printf("NO\n");
        }else if(p==0 && q==1){
            for(i=0; i<n-1; i++){
                for(j=0; j<n-1-i; j++){
                    if(a[j]>a[j+1]){
                        temp=a[j];
                        a[j]=a[j+1];
                        a[j+1]=temp;             
                    }
                }
            }
            p=0;
            for(i=0; i<n; i++){
                if(a[i]==a[i+1] || a[i]==a[i-1] || a[i]=='_'){
                    p=1;
                }else{
                    p=0;
                    break;
                }
            }
            if(p==1){
                printf("YES\n");
            }else{
                printf("NO\n");
            }
        }
    }

    return 0;
}
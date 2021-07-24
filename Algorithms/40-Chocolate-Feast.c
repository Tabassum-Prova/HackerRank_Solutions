#include <stdio.h>
int main(){

    int t,n,c,m,count=0,i,j,l,k,d,x;

    scanf("%d",&t);

    for(i=1; i<=t; i++){
        scanf("%d %d %d", &n, &c, &m);
        l = n/c;
        if(l==m){
            printf("%d\n", l+1);
        }else if(l<m){
            printf("%d\n", l);
        }else{
            d=l;
            x=l;
            while(d != 0){
                d-=m;
                x++;
                if(d==0){
                    break;
                }else{
                    d++;
                }
                
            }
            printf("%d\n", x);
        }
    }

    return 0;
}
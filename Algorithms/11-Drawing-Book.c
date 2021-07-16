#include <stdio.h>
int main() {

    int n, p, i, j, k=0,l, m, t=0, min;
    scanf("%d", &n);
    int arr[n];
    scanf("%d", &p);

   

    for(i=0; i<=n; i+=2) {
        for(j=i+1; j<=i+1; j++) {
            if(i==p || j ==p) {
                l = k;
            }else {
                k++;
            }
        }
    }

    for(i=n; i>=0; i-=2) {
        for(j=i-1; j>=i-1; j--) {
            if(i==p || j ==p) {
                m = t;
                break;
            }else {
                t++;
            }
        }
    }
   
   if(l < m) {
       min = l;
   }else {
       min = m;
   }

   printf("%d", min);

    return 0;
}
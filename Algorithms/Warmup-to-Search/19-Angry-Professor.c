#include <stdio.h>
int main(){

    int n, k, i, time, late, t;

    scanf("%d", &t);

    while(t--){
        scanf("%d %d", &n, &k);
        int arr[n];
        time = 0;
        late = 0;

        for(i=0; i<n; i++) {
            scanf("%d", &arr[i]);
            if(arr[i] <= 0) {
                time++;
            }else if(arr[i] > 0) {
                late++;
            }
        }

        if(time >= k) {
            printf("NO\n");
        }else {
            printf("YES\n");
        }
    }

    return 0;
}
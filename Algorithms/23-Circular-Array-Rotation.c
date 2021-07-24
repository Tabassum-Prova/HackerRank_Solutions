#include <stdio.h>
int main(){

    int i, j, n, k, q,x;
    scanf("%d %d %d", &n, &k, &q);
    int arr[n], temp;

    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
       
    }

    while(k--){
        for(i=1;i<=k;i++)
	    {
		    temp=arr[0];
		    for(j=1;j<n;j++)
		    {
			    arr[j-1]=arr[j];
		    }
		    arr[n-1]=temp;
	    }
    }
     
   
    
    for (i = 0; i < q; i++)
    {
        scanf("%d", &x);
        printf("%d\n", arr[x]);
    }


    return 0;
}
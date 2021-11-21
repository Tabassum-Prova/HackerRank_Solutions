#include <stdio.h>
int main(){

    int i, size, highScore=0, s=0, max, min, lowest= 0;

    scanf("%d", &size);
    int arr[size];

    for(i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for(i=1; i<size; i++) {
        if(max < arr[i]) {
            max = arr[i];
            highScore++;
        }
    }

    for(i=1; i<size; i++) {
        if(min > arr[i]) {
            min = arr[i];
            lowest++;
        }    
    }
    
    

    printf("%d %d", highScore  , lowest );

    return 0;
}
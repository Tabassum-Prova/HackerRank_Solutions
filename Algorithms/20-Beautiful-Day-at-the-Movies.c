#include <stdio.h>
#include <math.h>

long int rev(long int i) {
    long int j, sum=0;

    while(i != 0) {
        j = i%10;
        sum = (sum*10) + j;
        i /= 10;
    }
    return sum;
}

int main() {

    long int i, a, b, k, count=0, c;
    

    scanf("%d %d %d", &a, &b, &k);

    for(i=a; i<=b; i++) {
         
        c = rev(i);
        if(abs(i-c) % k == 0) {
            count++;
        }   
    }

    printf("%d", count);


    return 0;
}
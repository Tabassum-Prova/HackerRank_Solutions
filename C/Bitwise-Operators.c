#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int m1=0, m2=0, m3=0;
  for(int i=1; i<=n; i++){
      for(int j=i+1; j<=n; j++){
          int and = i&j;

          if(and<k && and>m1){
              m1=and;
          }


          int or = i|j;

          if(or<k && or>m2){
              m2=or;
          }

          int xor = i^j;

          if(xor<k && xor>m3){
              m3=xor;
          }
      }
  }
   printf("%d\n%d\n%d\n", m1, m2, m3);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

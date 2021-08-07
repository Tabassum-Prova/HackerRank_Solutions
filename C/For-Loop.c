#include <stdio.h>
#include <string.h>

int main() 
{
    int a, b, i;
    char *str[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    for(i=a; i<=b; i++){
        if(i<10){
            printf("%s", str[i-1]);
        }else{
            if(i%2==0){
                printf("even");
            }else{
                printf("odd");
            }
        }
    }

    return 0;
}


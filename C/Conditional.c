#include <stdio.h>
int main(){

    char str[]={"one", "two", "three", "four", "five", "six", "seven", "eight","nine"};
    int n;
    scanf("%d", &n);

    if(n>=1 && n<=9){
        printf("%s", str[n-1]);
    }else{
        printf("Greater than 9");
    }

    return 0;
}
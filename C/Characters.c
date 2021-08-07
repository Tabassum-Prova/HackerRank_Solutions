#include <stdio.h>
int main(){

    char c, s[100], sen[100];
    scanf("%c", &c);
    scanf("%s%*c", &s);
    scanf("%[^\n]", &sen);

    printf("%c\n", c);
    printf("%s\n", s);
    printf("%s\n", sen);

    return 0;
}
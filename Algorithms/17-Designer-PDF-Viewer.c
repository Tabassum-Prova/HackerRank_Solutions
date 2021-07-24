#include <stdio.h>
#include <string.h>
int main() {

    int h[28], i, a;
    char word[12];

    for(i=0; i<26; i++) {
        scanf("%d", &h[i]);
    }
    scanf("%s", word);
    int tall = strlen(word);
    printf("%d", tall);

    for(i=0; i<tall; i++) {
       a = word[i] - 97;
       printf("%d ", a);
    }

    return 0;
}
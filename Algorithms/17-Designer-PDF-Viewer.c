#include <stdio.h>
#include <string.h>
int main() {

    int h[28], i, a, max=0, area;
    char word[12];

    for(i=0; i<26; i++) {
        scanf("%d", &h[i]);
    }
    scanf("%s", word);
    int tall = strlen(word);
     
    for(i=0; i<tall; i++) {
        a = word[i] - 97;
        if(h[a] > max) {
            max = h[a];
        }
    }

    area = max * tall;
    printf("%d", area);

    

    return 0;
}
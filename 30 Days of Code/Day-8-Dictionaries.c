#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int n, found = 0;
char nam[20];

struct phoneBook {
    char name[20];
    unsigned int number;
} phn[100001];
int main() {
    scanf("%d", &n);
    //struct phoneBook phn[n];
    for(int i = 0; i < n; i++) {
        scanf("%s %u", phn[i].name, &phn[i].number);
    }
    while (scanf("%s", nam) >= 0) {
        for(int i = 0; i < n; i++) {
            if(strcmp(phn[i].name, nam) == 0) {
                printf("%s=%u\n", nam, phn[i].number);
                found = 1;
                i = n;               //just to reduce execution time
            }
        }
        if(found == 0) {
            printf("Not found\n");
        }
        else if(found == 1) {
            found = 0;
        }
    }
    return 0;
}
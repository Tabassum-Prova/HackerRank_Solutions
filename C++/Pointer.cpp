#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function 
    int c, olda;
    olda=*a;
    c = *a + *b;
    *a = c;
    if(*b>olda) {
        *b = *b -olda;
    }else {
        *b = olda - *b;
    }
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
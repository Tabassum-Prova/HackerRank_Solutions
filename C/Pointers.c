#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int e, f;
    e= *a;
    f= *b;
    
    *a = e+f;
    *b = abs(e-f);
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
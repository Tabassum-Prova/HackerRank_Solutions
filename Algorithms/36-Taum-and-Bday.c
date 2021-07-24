#include <stdio.h>
int main(){

    int b, w, bc, wc, z, t;
    scanf("%d", &t);

    while(t--){
        scanf("%d %d", &b, &w);
        scanf("%d %d %d", &bc, &wc, &z);

        int d=0, e=0, f=0;

        if(bc==wc){
            printf("%d\n", b*bc + w*wc);
            printf("l");
        }else if(b !=w && (z>bc || z>wc)){
            printf("%d\n", b*bc + w*wc);

        }else if(b!=w && bc>wc+z){
            d=b+w;
            printf("%d\n", d*wc+ b*z);
            printf("p");
        }else if(b==w && bc>wc){
            e = wc+z;
            printf("%d\n", b*e + w*wc);
            printf("k");
        }else if(b==w && wc>bc){
            f = bc+z;
            printf("%d\n", b*bc + w*f);
            printf("0");
        }
    }

    return 0;
}
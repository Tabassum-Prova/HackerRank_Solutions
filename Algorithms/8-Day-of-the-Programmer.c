#include <stdio.h>
int main() {

    int year, i, j, mnth = 215, day;
    scanf("%d", &year);

    

    if((((year % 4 == 0) && (year % 100 != 0))) ||  (year % 400 == 0)) {
        mnth+=29;
   
    }else {
        mnth+=28;
        
    }

    // if(year==1800) {
    //     mnth+=1;
    // }

    

    day = 256 - mnth;

    printf("%d.09.%d", day,year);



    return 0;
}
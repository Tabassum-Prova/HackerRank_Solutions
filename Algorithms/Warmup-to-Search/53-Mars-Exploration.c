#include <stdio.h>
#include <string.h>
int main(){

    
    int i, count=0, c, j=1;
    char s[100];
    scanf("%s", s);
    c = strlen(s);
   

    for(i=0; i<c; i++,j++){
     
        if(j==1 && s[i]!='S'){
            count++;
        }else if(j==2 && s[i]!='O'){
            count++;
        }else if(j==3 && s[i]!='S'){
            count++;
        }if(j==3){
            j=0;
        }
        
    }

    printf("%d", count);

    return 0;
}
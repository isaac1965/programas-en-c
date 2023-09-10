#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i,k,a;
    n=9;
    for(i=0;i<=n;i++){
        for(k=n;k<=n;k--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

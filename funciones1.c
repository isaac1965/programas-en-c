#include <stdio.h>
void serieFibonacci();
int main(){
    serieFibonacci();
    return 0;
}
void serieFibonacci(){

    int x, y,n,i,res;
    
    x = 0;
    y = 1;
    i = 3;
    n = 5;
    if( n == 1 ){
        printf("0");
    }else if(n == 2){
        printf("0,1");
    }
    printf("0,1,");
    while(i <=n){
        res = x + y;
        printf("%i,",res);
        x = y;
        y = res;
        i++;
    }
}

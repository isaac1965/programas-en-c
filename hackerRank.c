#include <stdio.h>

int main(){
    int x,i,n,y,res,z;
    printf("Ingrese un valor para n:");
    scanf("%i",&n);
    x=0;
    for(i=-5;i<=n;i++){
     res = n % 10;
     x+=res;
     z = n / 10;
     n = z;
    }
    printf("%i",x);
    return 0;
}

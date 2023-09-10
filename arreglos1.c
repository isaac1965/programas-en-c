#include <stdio.h>
void func();
void leer();
int main(){
    int v[2];
    func(v); 
    leer(v);

    return 0;
}
void func(int a[]){
    int i;
    for(i=0;i<=3;i++){
       printf("Ingrese el valor para la posicion %i: ",i);
       scanf("%i", &a[i]);
    }
}

void leer(int x[]){
    int i;

    for(i=0; i<=3; i++){
        printf("%i,",x[i]);
    }
}

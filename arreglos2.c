#include <stdio.h>
void ordenar();
void imprimir();
int main(){
    int vector[3]={5,7,3};
    ordenar(vector);
    imprimir(vector);
    return 0;
}
void ordenar(int x[]){
    int i,k,y,aux;

    for(i=0;i<=3;i++){
        for(k=2;k <=3; k++){
            if(x[k] < x[i]){
              aux = x[k];
              x[k]= x[i];
              x[i] = aux;
            }
        }
    }
}

void imprimir(int z[]){
int i;
    for(i=0; i<=3;i++){
        printf("%i,",z[i]);
    }    

}

#include <stdio.h>

int main(){
    int v[4],i;
    //Declarando e Inicializando un vector.
    int v1[]={3,6,3,6,3,2};
    for(i=0; i<= 4; i++){
        printf("Ingrese un valor para la posicion %i:",i);
        scanf("%i",&v[i]);
    }

    for(i=0; i<= 4; i++){
        printf("%i,",v[i]);
    }
    return 0;
}

#include <stdio.h>
void suma();
int main(){
    suma();
    suma();
    return 0;
}

void suma(){
    int res, x, y;

    printf("Ingrese un valor para x: ");
    scanf("%i", &x);
    printf("Ingrese un valor para y: ");
    scanf("%i", &y);

    res = x + y;

    printf("El resultado de la suma es: %i\n", res);
}

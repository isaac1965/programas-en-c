// Bloque 2.2 Aplicación Estructuras selectivas
// Realiza un programa que lea tres números enteros positivos e imprima el
// mayour y el menor de los tres, Intente que el programa realice el menor numero de comparaciones
// posibles entre los números.
#include <stdio.h>
int main() {
    int x, y, z;
    printf("Ingrese el primer valor: ");
    scanf("%i", &x);
    printf("Ingrese el primer valor: ");
    scanf("%i", &y);
    printf("Ingrese el primer valor: ");
    scanf("%i", &z);

    if(x > 0){
        if(x > y){
            if(x > z){
                    printf("El mayor de los tres es x");
            }else{
                printf("El mayor de los tres es z y menor de los 3 es y");
            }else{
                if(y > z){
                   printf("y es mayor");
                }else{
                    printf("z es mayor");
                }
            }else{
                printf("El numero es negativo");
            }
    return 0;
}

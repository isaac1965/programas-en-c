// Realiza un programa en C que lea un número entre 1 y 4 y devuelva el día 
// de la semana
#include <stdio.h>

int main(){
    int num;

    printf("Ingrese un número: ");
    scanf("%i",&num);

    switch(num){
        case 1: printf("Domingo");break;
        case 2: printf("Lunes");break;
        case 3: printf("Martes");break;
        case 4: printf("Miércoles");break;
        default: printf("El número no es correcto");
    }

    return 0;
}

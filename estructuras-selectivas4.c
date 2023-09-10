// Realiza un programa en C que lea un número entre 1 y 4 y devuelva el día 
// de la semana
#include <stdio.h>

int main(){
    int num;

    printf("Ingrese un número: ");
    scanf("%i",&num);

    if( num == 1 ){
        printf("Domingo");

    }else if(num == 2){
        printf("Lunes");

    }else if(num == 3){
        printf("Martes");
    }else if(num == 4) {
        printf("Miércoles");
    }else{
        printf("El número ingresado es incorrecto");
    }
    
    return 0;
}

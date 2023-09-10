#include <stdio.h>

int suma();

int main(){

    int x, y, sum, sum1;

    printf("Ingrese valor para x: ");
    scanf("%i", &x);
    printf("Ingrese valor para y: ");
    scanf("%i", &y);

     sum = suma(x,y);
     sum1 = suma(5,7);

     printf("El valor de la suma es: %i\n",sum);
     printf("El valor de la suma es: %i",sum1);


    return 0;
}

int suma(int a, int b){
    return a + b;
}



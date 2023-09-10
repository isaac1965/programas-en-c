#include <stdio.h>
int main() {
    int a, res;
    printf("ingrese un numero: ");
    scanf("%i", &a);
    res = a % 2;
    if(res == 0) {
        printf("El numero es par ");
    }else {
        printf("El numero es impar ");
    }
    return 0;
}

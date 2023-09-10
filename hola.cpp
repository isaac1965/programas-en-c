#include <stdio.h>

int main() {
    int a, b, suma;

    printf("Introduce el primer número: ");
    scanf("%d", &a);

    printf("Introduce el segundo número: ");
    scanf("%d", &b);

    suma = a + b;

    printf("La suma de %d y %d es: %d\n", a, b, suma);

    return 0;
}

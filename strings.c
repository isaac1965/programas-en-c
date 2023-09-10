#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char c1[20], c2[20];
    printf("Introduce una contraseña: ");
    fgets(c1,20,stdin);
    printf("Repetir contraseña:");
    fflush(stdin);
    fgets(c2,20,stdin);
    if(strcmp(c1,c2) == 0){
        printf("Las contraseñas coinciden");
    }else{
        printf("Las contraseñas no son iguales");
    }

    system("pause");
    return 0;
}

#include <stdio.h>

int main()
{
    printf("Hola mundo\n");

    int *pvariable,variable=10;
    pvariable = &variable;

    printf("Contenido del puntero: %d\n",*pvariable);
    printf("Direccion de memoria almacenada por el puntero: %d\n",pvariable);
    printf("Direccion de memoria de la variable: %d\n",&variable);
    printf("Direccion de memoria del puntero: %d\n",&pvariable);
    printf("Tamanio de memoria utilizado por la variable: %d\n",sizeof(int));

    return 0;
}

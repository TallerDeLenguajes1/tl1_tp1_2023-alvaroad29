#include <stdio.h>

// FUNCIONES

int cuadrado(int num);
void cuadrado1(int num);

void invertir(int *a,int *b);
void orden(int *a,int *b);

int main()
{
    //int num=5;
    //printf("%d",cuadrado(num));
    //printf("%d\n",&num);
    //cuadrado1(num);


    //otras func

    
    int a=4,b=3;
    printf("%d\n",a);
    printf("%d\n",b);
    invertir(&a,&b);
    printf("%d\n",a);
    printf("%d\n",b);
    


    return 0;
}


int cuadrado(int num)
{
    return num*num;
}

void cuadrado1(int num)
{
    printf("El cuadrado de %d es: %d\n",num, num*num);
    printf("La direccion de memoria la varible recibida es: %d\n",&num); //la dire es distinta que la original
}

void invertir(int *a,int *b)
{
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

void orden(int *a,int *b)
{
    if (*a < *b)
    {
        *a = *b;
    }
}
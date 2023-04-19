/* Guia 0, Ej 6
 Escriba una función que calcule la suma y el producto de dos números enteros
utilizando punteros y luego los muestre por pantalla */

#include<stdio.h>
void op(int *, int *);

int main(){
    int a, b, *aptr, *bptr;
    a = 2;
    b = 3;
    aptr = &a;
    bptr=  &b;
    printf("Los numeros a y b son: %d y %d\n", a, b);
    op(aptr, bptr);

    return 0;
}

void  op(int *aptr, int *bptr){
    printf("La suma es %d\n", *aptr + *bptr);
    printf("El producto es %d\n", *aptr * *bptr);
}

#include <stdio.h>

// Leer dos números enteros presentar por pantalla el promedio de ellos
int main(){
    int num1, num2, suma;
    printf("Ingrese el primer valor\n");
    scanf("%d", &num1);
    printf("Ingrese el segundo valor\n");
    scanf("%d", &num2);
    suma = (num1 + num2) / 2;
    printf("el promedio es:%d\n", suma);
    return 0;
};
#include<stdio.h>

// Ingresar tres números enteros, presentar por pantalla la suma de ellos.
int main(){
    int num1, num2, num3, suma;
    printf("Ingrese el primer valor\n");
    scanf("%d", &num1);
    printf("Ingrese el segundo valor\n");
    scanf("%d", &num2);
    printf("Ingrese el tercer valor\n");
    scanf("%d", &num3);
    suma = num1 + num2 + num3;
    printf("el resultado de la suma es:%d\n", suma);
    return 0;
};
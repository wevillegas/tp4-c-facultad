#include<stdio.h>

// Convertir una medida dada en metros a sus equivalentes en decímetros y centímetros. 

int main () {
    int numM, dec, cen;
    printf("ingrese un valor\n");
    scanf("%d", &numM);
    dec = numM * 10;
    cen = numM * 100;
    printf("el valor en metros es:%d\n", numM);
    printf("el valor en decimetros es:%d\n", dec);
    printf("el valor en centimetros es:%d\n", cen);
    return 0;
}
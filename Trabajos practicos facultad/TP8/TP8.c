#include<stdio.h>

// Dado el precio de un producto indicar, por pantalla, los impuestos que debe pagar. IVA 21%, Ingresos Brutos 2.5% e Impuesto Municipal 1.5%
// corregir
int main () {
    float precio, iva, IB, IM;
    printf("Ingrese el precio del producto\n");
    scanf("%f", &precio);
    iva = (precio * 1.21);
    IB = (precio * 1.025);
    IM = (precio * 1.015);
    printf("El precio es: %f\n", precio);
    printf("El precio mas IVA es: %f\n", iva);
    printf("El precio mas IB es: %f\n", IB);
    printf("El precio mas IM es: %f\n", IM);
    return 0;
}
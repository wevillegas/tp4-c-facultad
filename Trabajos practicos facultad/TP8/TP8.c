#include<stdio.h>

// Dado el precio de un producto indicar, por pantalla, los impuestos que debe pagar. IVA 21%, Ingresos Brutos 2.5% e Impuesto Municipal 1.5%
// corregir
int main () {
    float precio, iva, IB, IM;
    printf("Ingrese el precio del producto\n");
    scanf("%d", &precio);
    iva = (precio * 1.21);
    IB = (precio * 1.025);
    IM = (precio * 1.015);
    printf("El precio es: %d\n", precio);
    printf("El precio mas IVA es: %d\n", iva);
    printf("El precio mas IB es: %d\n", IB);
    printf("El precio mas IM es: %d\n", IM);
    return 0;
}
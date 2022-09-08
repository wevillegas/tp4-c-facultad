#include<stdio.h>

// Ingresar los lados de un rectángulo, presentar por pantalla su perímetro y su superficie.
int main () {
    int base, altura, perimetro, area;
    printf("Ingrese el valor de la BASE del rectangulo\n");
    scanf("%d", &base);
    printf("Ingrese el valor de la ALTURA del rectangulo\n");
    scanf("%d", &altura);
    printf("\n");
    perimetro = base + altura;
    area = base * altura;
    printf("El PERIMETRO del rectangulo es: %d\n", perimetro);
    printf("El AREA del rectangulo es: %d\n", area);
    return 0;
}
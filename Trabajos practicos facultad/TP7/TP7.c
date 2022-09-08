#include<stdio.h>
#include<math.h>

// Ingresar el radio de un círculo, presentar por pantalla el diámetro, el perímetro y el área 
int main () {
    int radio, diametro, perimetro, area;
    printf("Ingrese el radio del circulo\n");
    scanf("%d", &radio);
    diametro = 2 * radio;
    perimetro = M_PI * diametro;
    area = M_PI * pow(radio, 2);
    printf("El diametro del circulo es: %d\n", diametro);
    printf("El perimetro del circulo es: %d\n", perimetro);
    printf("El area del circulo es: %d\n", area);
    return 0;
}
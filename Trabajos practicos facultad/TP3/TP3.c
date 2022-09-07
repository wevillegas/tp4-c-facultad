#include<stdio.h>
#include<math.h>

//Ingresar dos números enteros y presentar por pantalla la media geométrica.
int main()
{
    int num1, num2, suma;
    printf("Ingrese el primer valor\n");
    scanf("%d", &num1);
    printf("Ingrese el segundo valor\n");
    scanf("%d", &num2);
    suma = num1 + num2;
    printf("la media geometrica es: %lf", sqrt(suma));
    return 0;
}

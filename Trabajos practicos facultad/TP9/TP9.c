#include<stdio.h>

// Ingresar dos puntos en el plano P1(x1, y1) y P2(x2, y2), estos corresponden, respectivamente, a los vértices inferior izquierdo y superior derecho de un rectángulo. Indicar el perímetro y la superficie del rectángulo. 
int main () {
    int x1, y1, x2, y2, perimetro, superficie;
    printf("Ingrese un valor para X1 e Y1: \n");
    scanf("%d", x1);
    scanf("%d", y1);
    printf("Ingrese un valor para X2 e Y2: \n");
    scanf("%d", x2);
    scanf("%d", y2);
    perimetro = (x2 - x1) + (y2 - y1);
    superficie = (x2 - x1) * (y2 - y1);
    printf("El perimetro es: %d\n", perimetro);
    printf("La superficie es: %d\n", superficie);
    return 0;
}
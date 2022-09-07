#include<stdio.h>

// Convertir temperatura en grados Fahrenheit a grados centígrados 
int main () {
    int gradosF, gradosC;
    printf("ingrese una temperatura en grados fahrenheit\n");
    scanf("%d", &gradosF);
    gradosC = (gradosF - 32) * 5/9;
    printf("La temperatura en grados centigrados es:%d\n", gradosC);
    return 0;
}
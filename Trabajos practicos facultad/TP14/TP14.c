#include<stdio.h>

// Ingresar tres números, ordenarlos en forma ascendente y presentarlos por pantalla. En caso de ser iguales imprimir un mensaje que diga " Son Iguales"
int main () {
    int a, b, c;
    printf("Ingrese el primer valor: \n");
    scanf("%d", &a);
    printf("Ingrese el segundo valor: \n");
    scanf("%d", &b);
    printf("Ingrese el tercer valor: \n");
    scanf("%d", &c);

    if (a == b || b == c || a == c)
    {
        printf("Los numeros son iguales");
    } else if (a < b)
    {
        if (b < c)
        {
            printf("%d", a);
            printf("%d", b);
            printf("%d", c);
        } else if (a < c)
        {
            printf("%d", a);
            printf("%d", c);
            printf("%d", b);
        } else {
            printf("%d", c);
            printf("%d", a);
            printf("%d", b);
        }
        
        
    } else if (a < c) {
        printf("%d", b);
        printf("%d", a);
        printf("%d", c);
    } else if (b < c){
        printf("%d", b);
        printf("%d", c);
        printf("%d", a);
    } else {
        printf("%d", c);
        printf("%d", b);
        printf("%d", a);
    }
    
}
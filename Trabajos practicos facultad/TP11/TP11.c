#include<stdio.h>
#include<math.h>

//Ingresar tres valores positivos, indicar si son lados de un triángulo rectángulo. Presentar por pantalla el mensaje correspondiente.
int main () {
    int a, b, c, h, a2, b2, c2, a2b2, b2c2, a2c2;
    printf("Ingrese un valor positivo A: \n");
    scanf("%d", &a);
    printf("Ingrese un valor positivo B: \n");
    scanf("%d", &b);
    printf("Ingrese un valor positivo c: \n");
    scanf("%d", &c);
    a2 = pow(a, 2);
    b2 = pow(b, 2);
    c2 = pow(c, 2);
    a2b2 = a2 + b2;
    b2c2 = b2 + c2;
    a2c2 = a2 + c2;
    
    // Bloques if y else
    h = sqrt(a2b2);
    if (h == c)
    {
        printf("Los valores ingresados son lados de un triangulo rectangulo");
        return;
    } else {
        h = sqrt(b2c2);
        if (h == a)
        {
            printf("Los valores ingresados son lados de un triangulo rectangulo");
        } else {
            h = sqrt(a2c2);
            if (h == b)
            {
                printf("Los valores ingresados son lados de un triangulo rectangulo");
            } else {
                printf("Los valores ingresados NO son lados de un triangulo rectangulo");
            }
            
        }
        
    }
    return 0;
}
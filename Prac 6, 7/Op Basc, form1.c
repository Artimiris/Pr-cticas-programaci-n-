//*****Operaciones Básicas *****//

#include <stdio.h>

float resultado = 0.0; // Variable global

int main() {
    int cantidad_numero;
    printf("Ingrese la cantidad de números (5, 4, 3, 2): ");
    scanf("%d", &cantidad_numero);

    if (cantidad_numero == 5) {
        int num1 = 1, num2 = 20, num3 = 43, num4 = 65, num5 = 10;
        resultado = num1 + num2 + num3 + num4 + num5;
        printf("La suma de los números 1,20,43,65 y 10 es: %.0f\n", resultado);
    } else if (cantidad_numero == 4) {
        float num1 = 23.8F, num2 = 12.8F, num3 = 5.5F, num4 = 4.3F;
        resultado = num1 - num2 - num3 - num4;
        printf("La resta de los números 23.8,12.8,5.5 y 4.3 es: %.2f\n", resultado);
    } else if (cantidad_numero == 3) {
        int num1 = 2, num2 = 5;
        float num3 = 4.3F;
        resultado = num1 * num2 * num3;
        printf("La multiplicación de los números 2,5 y 4.3 es: %.2f\n", resultado);
    } else if (cantidad_numero == 2) {
        int num1 = 10;
        float num2 = 0.0F;

        printf("Ingrese un número diferente de cero: ");
        scanf("%f", &num2);

        if (num2 == 0) {
            printf("Operación indefinida: División entre cero no permitida.\n");
        } else {
            resultado = num1 / num2;
            printf("El resultado de la división de su número y 10 es: %.3f\n", resultado);
        }
    } else {
        printf("La cantidad de números ingresada no es válida. Programa terminado.\n");
    }

    return 0;
}

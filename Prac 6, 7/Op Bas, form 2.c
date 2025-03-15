//*****Operaciones Básicas Mejorado*****/

#include <stdio.h>

// Variable global
float resultado = 0.0;

int main() {
    int cantidad_numero;
    printf("Ingrese la cantidad de números a operar (2, 3, 4 o 5): ");
    scanf("%d", &cantidad_numero);

    if (cantidad_numero == 5) {
        int num1, num2, num3, num4, num5;
        printf("Ingrese cinco números enteros separados por espacio: ");
        scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
        resultado = num1 + num2 + num3 + num4 + num5;
        printf("La suma de los números es: %.0f\n", resultado);

    } else if (cantidad_numero == 4) {
        float num1, num2, num3, num4;
        printf("Ingrese cuatro números separados por espacio: ");
        scanf("%f %f %f %f", &num1, &num2, &num3, &num4);
        resultado = num1 - num2 - num3 - num4;
        printf("La resta de los números es: %.2f\n", resultado);

    } else if (cantidad_numero == 3) {
        int num1, num2;
        float num3;
        printf("Ingrese tres números enteros o dos enteros y uno decimal separados por espacio: ");
        scanf("%d %d %f", &num1, &num2, &num3);
        resultado = num1 * num2 * num3;
        printf("La multiplicación de los números es: %.2f\n", resultado);

    } else if (cantidad_numero == 2) {
        int num1;
        float num2;
        printf("Ingrese un número entero y un número decimal separados por espacio: ");
        scanf("%d %f", &num1, &num2);

        if (num2 == 0) {
            printf("Operación indefinida: División por cero.\n");
        } else {
            resultado = num1 / num2;
            printf("El resultado de la división es: %.3f\n", resultado);
        }
    } else {
        // Caso de error
        printf("La cantidad de números ingresada no es válida.\n");
    }

    return 0;
}
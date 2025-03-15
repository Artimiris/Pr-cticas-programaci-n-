#include <stdio.h>

// Declaración de variable global
float resultado = 0.0f;

int main() {
    int opcion;
    // Menú
    printf("***** Operaciones Básicas *****\n");
    printf("Seleccione una opción:\n");
    printf("1 - Suma (5 números enteros)\n");
    printf("2 - Resta (4 números decimales)\n");
    printf("3 - Multiplicación (2 enteros y 1 decimal)\n");
    printf("4 - División (1 entero y 1 decimal)\n");
    printf("Opción: ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1: {
            int a, b, c, d, e;
            printf("Ingrese cinco números enteros separados por espacios: ");
            scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
            resultado = a + b + c + d + e;
            printf("El resultado de la suma es: %.0f\n", resultado);
            break;
        }
        case 2: {
            float a, b, c, d;
            printf("Ingrese cuatro números decimales separados por espacios: ");
            scanf("%f %f %f %f", &a, &b, &c, &d);
            resultado = a - b - c - d;
            printf("El resultado de la resta es: %.2f\n", resultado);
            break;
        }
        case 3: {
            int a, b;
            float c;
            printf("Ingrese dos números enteros y un número decimal separados por espacios: ");
            scanf("%d %d %f", &a, &b, &c);
            resultado = a * b * c;
            printf("El resultado de la multiplicación es: %.2f\n", resultado);
            break;
        }
        case 4: {
            int a;
            float b;
            printf("Ingrese un número entero (dividendo) y un número decimal (divisor): ");
            scanf("%d %f", &a, &b);
            if (b == 0) {
                printf("Operación indefinida: división entre cero.\n");
            } else {
                resultado = a / b;
                printf("El resultado de la división es: %.3f\n", resultado);
            }
            break;
        }
        default: {
            printf("La opción ingresada no es válida. El programa terminará.\n");
            break;
        }
    }

    return 0;
}

//*****Operaciones Básicas*****/

#include <stdio.h>

float resultado = 0.0;  // Variable global

int main() {
    int opcion;

    printf("\n**** Menú de Operaciones Básicas ****\n");
    printf("1. Suma de cinco números enteros\n");
    printf("2. Resta de cuatro números tipo float\n");
    printf("3. Multiplicación de dos enteros y un float\n");
    printf("4. División de un entero y un float\n");
    printf("Seleccione una opción (1-4): ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1: {
            int a = 10, b = 20, c = 30, d = 40, e = 50;
            resultado = a + b + c + d + e;
            printf("\nLa suma de los números 10,20,30,40 y 50 es: %.0f\n", resultado);
            break;
        }
        case 2: {
            float x = 100.5F, y = 20.4F, z = 10.2F, w = 5.1F;
            resultado = x - y - z - w;
            printf("\nLa resta de los números 100.5,20.4,10.2 y 5.1 es: %.2f\n", resultado);
            break;
        }
        case 3: {
            int m = 5, n = 4;
            float o = 2.5F;
            resultado = m * n * o;
            printf("\nLa multiplicación de los números 5,4 y 2.5 es: %.2f\n", resultado);
            break;
        }
        case 4: {
            int p = 100;
            float q = 15.2F;

            if (q == 0.0F) {
                printf("\nOperación indefinida: No se puede dividir entre cero.\n");
            } else {
                resultado = p / q;
                printf("\nEl resultado de la división es: %.3f\n", resultado);
            }
            break;
        }
        default:
            printf("\nOpción no válida. El programa terminará.\n");
            break;
    }

    return 0;
}

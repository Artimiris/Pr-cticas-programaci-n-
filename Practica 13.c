#include <stdio.h>

float resultado = 0.0;

void controladorMain();
void menu();
void leerNumeros(float numeros[], int n);
void suma(float numeros[], int n);
void resta(float numeros[], int n);
void multiplicacion(float numeros[], int n);
void division(float numeros[], int n);
void mostrarResultado();

int main() {
    controladorMain();
    return 0;
}

void controladorMain() {
    menu();
}

void menu() {
    int opcion, cantidad;
    float numeros[100];

    do {
        printf("\n===== MENÚ DE OPERACIONES BÁSICAS =====\n");
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. Multiplicación\n");
        printf("4. División\n");
        printf("5. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        if (opcion >= 1 && opcion <= 4) {
            printf("¿Cuántos números desea ingresar? ");
            scanf("%d", &cantidad);
            leerNumeros(numeros, cantidad);
        }

        switch (opcion) {
            case 1:
                suma(numeros, cantidad);
                mostrarResultado();
                break;
            case 2:
                resta(numeros, cantidad);
                mostrarResultado();
                break;
            case 3:
                multiplicacion(numeros, cantidad);
                mostrarResultado();
                break;
            case 4:
                division(numeros, cantidad);
                mostrarResultado();
                break;
            case 5:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción no válida. Intente de nuevo.\n");
        }
    } while (opcion != 5);
}

void leerNumeros(float numeros[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Ingrese el número #%d: ", i + 1);
        scanf("%f", &numeros[i]);
    }
}

void suma(float numeros[], int n) {
    resultado = 0;
    for (int i = 0; i < n; i++) {
        resultado += numeros[i];
    }
}

void resta(float numeros[], int n) {
    resultado = numeros[0];
    for (int i = 1; i < n; i++) {
        resultado -= numeros[i];
    }
}

void multiplicacion(float numeros[], int n) {
    resultado = 1;
    for (int i = 0; i < n; i++) {
        resultado *= numeros[i];
    }
}

void division(float numeros[], int n) {
    resultado = numeros[0];
    for (int i = 1; i < n; i++) {
        if (numeros[i] == 0) {
            printf("Error: división entre cero en el número #%d. Operación indefinida.\n", i + 1);
            resultado = 0;
            return;
        }
        resultado /= numeros[i];
    }
}

void mostrarResultado() {
    printf("\n>>> Resultado de la operación: %.4f\n", resultado);
}

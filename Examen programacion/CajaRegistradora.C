//Fatima Daniela Martínez Cruz
#include <stdio.h>
#include <string.h>

char nombres[100][50];
float precios[100];
int cantidades[100];
float resultados[100];
float importeTotal = 0;

void limpiarBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void imprimirTicket(int n) {
    printf("====================================\n");
    printf("        Artimiris¨Shop         \n");
    printf("   Direccion: Calle 50267, Estado de México     \n");
    printf("      Tel: 722 233 3296         \n");
    printf("====================================\n");
    printf("        Pago Autorizado             \n");
    printf("====================================\n");
    printf("%-20s %-10s %-10s %-10s\n", "Producto", "Precio", "Cantidad", "Subtotal");
    printf("------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("%-20s %10.2f %10d %10.3f\n", nombres[i], precios[i], cantidades[i], resultados[i]);
    }
    
    printf("------------------------------------\n");
    printf("TOTAL: %28.2f\n", importeTotal);
    printf("====================================\n");
    printf("    GRACIAS POR SU COMPRA!         \n");
    printf("====================================\n");
}

int main() {
    int n;
    printf("Ingrese la cantidad de productos: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) {
        printf("Cantidad inválida. Intente de nuevo.\n");
        return 1;
    }
    limpiarBuffer();

    for (int i = 0; i < n; i++) {
        printf("Ingrese el nombre del producto %d: ", i + 1);
        fgets(nombres[i], 50, stdin);
        nombres[i][strcspn(nombres[i], "\n")] = 0;
        
        printf("Ingrese el precio del producto %d: ", i + 1);
        if (scanf("%f", &precios[i]) != 1 || precios[i] <= 0) {
            printf("Precio inválido. Intente de nuevo.\n");
            return 1;
        }

        printf("Ingrese la cantidad comprada de %s: ", nombres[i]);
        if (scanf("%d", &cantidades[i]) != 1 || cantidades[i] <= 0) {
            printf("Cantidad inválida. Intente de nuevo.\n");
            return 1;
        }
        limpiarBuffer();

        resultados[i] = cantidades[i] * precios[i];
        if (cantidades[i] > 5) {
            printf("** Se aplicó un 20%% de descuento en %s **\n", nombres[i]);
            resultados[i] *= 0.8;
        }
        importeTotal += resultados[i];
    }
    
    imprimirTicket(n);
    
    return 0;
}

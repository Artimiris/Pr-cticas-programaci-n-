// ****** Figuras geométricas ********

#include <stdio.h>

float area = 0.0; // Variable global

int main() {
    const double PI = 3.1416;
    int opcion_principal, opcion_secundaria;

    printf("\n********** Cálculo de Áreas de Figuras Geométricas **********\n");
    printf("Seleccione el tipo de figura:\n");
    printf("1. Figuras Bidimensionales\n");
    printf("2. Figuras Tridimensionales\n");
    printf("Opción: ");
    scanf("%d", &opcion_principal);

    switch (opcion_principal) {
        case 1:
            printf("\n-- Figuras Bidimensionales --\n");
            printf("1. Área Cuadrado\n");
            printf("2. Área Rectángulo\n");
            printf("3. Área Triángulo\n");
            printf("4. Área Círculo\n");
            printf("Opción: ");
            scanf("%d", &opcion_secundaria);

            switch (opcion_secundaria) {
                case 1: {
                    int lado;
                    printf("Ingrese el lado del cuadrado: ");
                    scanf("%d", &lado);
                    area = lado * lado;
                    printf("El área del cuadrado es: %.2f\n", area);
                    break;
                }
                case 2: {
                    float base, altura;
                    printf("Ingrese la base del rectángulo: ");
                    scanf("%f", &base);
                    printf("Ingrese la altura del rectángulo: ");
                    scanf("%f", &altura);
                    area = base * altura;
                    printf("El área del rectángulo es: %.2f\n", area);
                    break;
                }
                case 3: {
                    float base, altura;
                    printf("Ingrese la base del triángulo: ");
                    scanf("%f", &base);
                    printf("Ingrese la altura del triángulo: ");
                    scanf("%f", &altura);
                    area = (base * altura) / 2;
                    printf("El área del triángulo es: %.2f\n", area);
                    break;
                }
                case 4: {
                    float radio;
                    printf("Ingrese el radio del círculo: ");
                    scanf("%f", &radio);
                    area = PI * radio * radio;
                    printf("El área del círculo es: %.2f\n", area);
                    break;
                }
                default:
                    printf("Opción no válida.\n");
            }
            break;

        case 2:
            printf("\n-- Figuras Tridimensionales --\n");
            printf("1. Área Cubo\n");
            printf("2. Área Prisma Rectangular\n");
            printf("3. Área Pirámide\n");
            printf("4. Área Esfera\n");
            printf("Opción: ");
            scanf("%d", &opcion_secundaria);

            switch (opcion_secundaria) {
                case 1: {
                    float lado;
                    printf("Ingrese el lado del cubo: ");
                    scanf("%f", &lado);
                    area = 6 * (lado * lado);
                    printf("El área del cubo es: %.2f\n", area);
                    break;
                }
                case 2: {
                    float largo, ancho, alto;
                    printf("Ingrese el largo del prisma: ");
                    scanf("%f", &largo);
                    printf("Ingrese el ancho del prisma: ");
                    scanf("%f", &ancho);
                    printf("Ingrese la altura del prisma: ");
                    scanf("%f", &alto);
                    area = 2 * (largo * ancho + largo * alto + ancho * alto);
                    printf("El área del prisma rectangular es: %.2f\n", area);
                    break;
                }
                case 3: {
                    float base, altura_base, altura_piramide;
                    printf("Ingrese la base de la pirámide: ");
                    scanf("%f", &base);
                    printf("Ingrese la altura de la base de la pirámide: ");
                    scanf("%f", &altura_base);
                    printf("Ingrese la altura de la pirámide: ");
                    scanf("%f", &altura_piramide);
                    area = (base * altura_base) + (0.5 * 4 * base * altura_piramide);
                    printf("El área de la pirámide es: %.2f\n", area);
                    break;
                }
                case 4: {
                    float radio;
                    printf("Ingrese el radio de la esfera: ");
                    scanf("%f", &radio);
                    area = 4 * PI * radio * radio;
                    printf("El área de la esfera es: %.2f\n", area);
                    break;
                }
                default:
                    printf("Opción no válida.\n");
            }
            break;

        default:
            printf("Opción no válida. El programa ha finalizado.\n");
    }

    return 0;
}

// ****** Figuras geométricas ********

#include <stdio.h>

double area = 0.0; // Variable global

int main() {
    const double pi = 3.1416;
    int opcion_principal, opcion_submenu;

    printf("********** Cálculo de áreas de figuras geométricas **********\n");
    printf("1. Figuras bidimensionales\n");
    printf("2. Figuras tridimensionales\n");
    printf("Ingrese el número de la opción deseada: ");
    scanf("%d", &opcion_principal);

    switch (opcion_principal) {
        case 1:
            printf("\n--- Figuras Bidimensionales ---\n");
            printf("1. Área del Cuadrado\n");
            printf("2. Área del Rectángulo\n");
            printf("3. Área del Triángulo\n");
            printf("4. Área del Círculo\n");
            printf("Seleccione una opción: ");
            scanf("%d", &opcion_submenu);

            switch (opcion_submenu) {
                case 1: {
                    int lado = 5;
                    area = lado * lado;
                    printf("El área del cuadrado cuando su lado=5 es: %.2f\n", area);
                    break;
                }
                case 2: {
                    double base = 7.0, altura = 4.0;
                    area = base * altura;
                    printf("El área del rectángulo cuando se base=7 y su altura=4 es: %.2f\n", area);
                    break;
                }
                case 3: {
                    double base = 6.0, altura = 3.0;
                    area = (base * altura) / 2;
                    printf("El área del triángulo cuando se base=6 y su altura=3 es: %.2f\n", area);
                    break;
                }
                case 4: {
                    double radio = 3.0;
                    area = pi * radio * radio;
                    printf("El área del círculo cuando su radio=3 es: %.2f\n", area);
                    break;
                }
                default:
                    printf("Opción no válida.\n");
            }
            break;
        case 2:
            printf("\n--- Figuras Tridimensionales ---\n");
            printf("1. Área del Cubo\n");
            printf("2. Área del Prisma Rectangular\n");
            printf("3. Área de la Pirámide\n");
            printf("4. Área de la Esfera\n");
            printf("Seleccione una opción: ");
            scanf("%d", &opcion_submenu);

            switch (opcion_submenu) {
                case 1: {
                    int lado = 4;
                    area = 6 * (lado * lado);
                    printf("El área del cubo cuando su lado=4 es: %.2f\n", area);
                    break;
                }
                case 2: {
                    double largo = 5.0, ancho = 3.0, altura = 2.0;
                    area = 2 * (largo * ancho + largo * altura + ancho * altura);
                    printf("El área del prisma rectangular cuando largo=5, ancho=3 y altura=2 es: %.2f\n", area);
                    break;
                }
                case 3: {
                    double area_base = 20.0, perimetro_base = 12.0, altura = 8.0;
                    area = area_base + (perimetro_base * altura) / 2;
                    printf("El área de la pirámide cuando el área_de_la_base=20, perimetro_base=12 y altura=8 es: %.2f\n", area);
                    break;
                }
                case 4: {
                    double radio = 2.5;
                    area = 4 * pi * (radio * radio);
                    printf("El área de la esfera cuando su radio=2.5 es: %.2f\n", area);
                    break;
                }
                default:
                    printf("Opción no válida.\n");
            }
            break;
        default:
            printf("Opción principal no válida. El programa terminará.\n");
    }

    return 0;
}

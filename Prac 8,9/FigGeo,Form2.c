#include <stdio.h>

float area = 0.0f; // Variable global

int main() {
    const float pi = 3.1416f;
    char tipo_figura[15];
    char figura[15];

    printf("Ingrese el tipo de figura (bidimensional o tridimensional): ");
    scanf("%s", tipo_figura);

    if (tipo_figura[0] == 'b') {
        printf("Ingrese la figura (cuadrado, rectangulo, triangulo, circulo): ");
        scanf("%s", figura);

        if (figura[0] == 'c' && figura[1] == 'u') {
            printf("Ingrese el valor del lado: ");
            scanf("%f", &lado);
            area = lado * lado;
            printf("El área del cuadrado es: %.2f\n", area);

        } else if (figura[0] == 'r') {
            float base, altura;
            printf("Ingrese la base: ");
            scanf("%f", &base);
            printf("Ingrese la altura: ");
            scanf("%f", &altura);
            area = base * altura;
            printf("El área del rectángulo es: %.2f\n", area);

        } else if (figura[0] == 't') {
            float base, altura;
            printf("Ingrese la base: ");
            scanf("%f", &base);
            printf("Ingrese la altura: ");
            scanf("%f", &altura);
            area = (base * altura) / 2;
            printf("El área del triángulo es: %.2f\n", area);

        } else if (figura[0] == 'c' && figura[1] == 'i') {
            printf("Ingrese el radio: ");
            scanf("%f", &radio);
            area = pi * (radio * radio);
            printf("El área del círculo es: %.2f\n", area);

        } else {
            printf("Figura no válida. Terminando el programa.\n");
            return 1;
        }

    } else if (tipo_figura[0] == 't') {
        printf("Ingrese la figura (cubo, cilindro, piramide, esfera): ");
        scanf("%s", figura);

        if (figura[0] == 'c' && figura[1] == 'u') {
            float lado;
            printf("Ingrese el valor del lado: ");
            scanf("%f", &lado);
            area = 6 * (lado * lado);
            printf("El área del cubo es: %.2f\n", area);

        } else if (figura[0] == 'c' && figura[1] == 'i') {
            float radio, altura;
            printf("Ingrese el radio: ");
            scanf("%f", &radio);
            printf("Ingrese la altura: ");
            scanf("%f", &altura);
            area = 2 * pi * radio * (radio + altura);
            printf("El área del cilindro es: %.2f\n", area);

        } else if (figura[0] == 'p') {
            float base, altura_base, altura_piramide;
            printf("Ingrese la base del área de la pirámide: ");
            scanf("%f", &base);
            printf("Ingrese la altura de la base: ");
            scanf("%f", &altura_base);
            printf("Ingrese la altura de la pirámide: ");
            scanf("%f", &altura_piramide);
            area = base * altura_base + (base * altura_piramide) / 2;
            printf("El área de la pirámide es: %.2f\n", area);

        } else if (figura[0] == 'e') {
            float radio;
            printf("Ingrese el radio: ");
            scanf("%f", &radio);
            area = 4 * pi * (radio * radio);
            printf("El área de la esfera es: %.2f\n", area);

        } else {
            printf("Figura no válida. Terminando el programa.\n");
            return 1;
        }
    } else {
        printf("Tipo de figura no válido. Terminando el programa.\n");
        return 1;
    }

    return 0;
}

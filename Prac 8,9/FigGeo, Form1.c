// ****** Figuras geométricas ********

#include <stdio.h>

// Variable global
float area = 0.0;

int main() {
    const double pi = 3.1416;
    char tipo_figura[20] = "bidimensional", figura[20] = "cuadrado";

    int lado = 5;
    double base = 6.0, altura = 4.0;
    double radio = 3.0;
    double altura_cilindro = 10.0;
    double altura_piramide = 12.0;

    if (strcmp(tipo_figura, "bidimensional") == 0) {
        if (strcmp(figura, "cuadrado") == 0) {
            area = lado * lado;
            printf("El área del cuadrado cuadno lado=5 es: %.2f\n", area);
        }
        else if (strcmp(figura, "rectángulo") == 0) {
            area = base * altura;
            printf("El área del rectángulo cuando base=6 y altura=4 es: %.2f\n", area);
        }
        else if (strcmp(figura, "triángulo") == 0) {
            area = (base * altura) / 2;
            printf("El área del triángulo cuando base=6 y altura=4 es: %.2f\n", area);
        }
        else if (strcmp(figura, "circulo") == 0) {
            area = pi * radio * radio;
            printf("El área del círculo cuando radio=3 es: %.2f\n", area);
        }
        else {
            printf("Figura no válida. Programa terminado.\n");
            return 1;
        }
    } 
    else if (strcmp(tipo_figura, "tridimensional") == 0) {
        if (strcmp(figura, "cubo") == 0) {
            area = 6 * (lado * lado);
            printf("El área del cubo cuando lado=5 es: %.2f\n", area);
        }
        else if (strcmp(figura, "cilindro") == 0) {
            area = 2 * pi * radio * (radio + altura_cilindro);
            printf("El área del cilindro cuando radio=3 y altura=10 es: %.2f\n", area);
        }
        else if (strcmp(figura, "pirámide") == 0) {
            area = (base * altura) + (2 * base * altura_piramide);
            printf("El área de la pirámide cuando base=6, altura_base=4 y altura=12 es: %.2f\n", area);
        }
        else if (strcmp(figura, "esfera") == 0) {
            area = 4 * pi * (radio * radio);
            printf("El área de la esfera cuando radio=3 es: %.2f\n", area);
        }
        else {
            printf("Figura no válida. Programa terminado.\n");
            return 1;
        }
    }
    else {
        printf("Tipo de figura no válida. Programa terminado.\n");
        return 1;
    }

    return 0;
}

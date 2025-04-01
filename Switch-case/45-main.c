#include <stdio.h>
#include <math.h>

int main() {
    int forma;
    float area, comprimento, largura, raio;
    scanf("%d", &forma);

    switch (forma) {
        case 1:
            scanf("%f", &comprimento);
            area = comprimento * comprimento;
            printf("Área do quadrado: %.2f\n", area);
            break;
        case 2:
            scanf("%f %f", &comprimento, &largura);
            area = comprimento * largura;
            printf("Área do retângulo: %.2f\n", area);
            break;
        case 3:
            scanf("%f", &raio);
            area = M_PI * raio * raio;
            printf("Área do círculo: %.2f\n", area);
            break;
        default:
            printf("Forma inválida\n");
    }
    return 0;
}


#include <stdio.h>

int main() {
    float valor;
    int moeda;
    scanf("%f %d", &valor, &moeda);

    switch (moeda) {
        case 1:
            printf("Valor em Dólar: %.2f\n", valor * 5.25);  // Exemplo de cotação
            break;
        case 2:
            printf("Valor em Euro: %.2f\n", valor * 5.80);  // Exemplo de cotação
            break;
        case 3:
            printf("Valor em Libra: %.2f\n", valor * 6.70);  // Exemplo de cotação
            break;
        default:
            printf("Moeda inválida\n");
    }
    return 0;
}


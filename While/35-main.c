#include <stdio.h>

int main() {
    int numero, soma = 0, count = 0;
    while (1) {
        scanf("%d", &numero);
        if (numero < 0) {
            break;
        }
        soma += numero;
        count++;
    }
    if (count > 0) {
        printf("%.2f\n", (float)soma / count);
    }
    return 0;
}

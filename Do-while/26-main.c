#include <stdio.h>

int main() {
    int N, soma = 0, numero, i = 0;
    scanf("%d", &N);
    do {
        scanf("%d", &numero);
        soma += numero;
        i++;
    } while (i < N);
    printf("%.2f\n", (float)soma / N);
    return 0;
}

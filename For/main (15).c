#include <stdio.h>

int main() {
    int N, soma = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        int numero;
        scanf("%d", &numero);
        soma += numero;
    }
    printf("%.2f\n", (float)soma / N);
    return 0;
}

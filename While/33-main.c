#include <stdio.h>

int main() {
    int numero, soma = 0, i = 1;
    scanf("%d", &numero);
    while (i < numero) {
        if (numero % i == 0) {
            soma += i;
        }
        i++;
    }
    if (soma == numero) {
        printf("Perfeito\n");
    } else {
        printf("Não perfeito\n");
    }
    return 0;
}

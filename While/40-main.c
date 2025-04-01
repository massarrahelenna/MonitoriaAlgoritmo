#include <stdio.h>

int main() {
    int numero, original, invertido = 0;
    scanf("%d", &numero);
    original = numero;
    while (numero > 0) {
        invertido = invertido * 10 + numero % 10;
        numero /= 10;
    }
    if (original == invertido) {
        printf("Palíndromo\n");
    } else {
        printf("Não palíndromo\n");
    }
    return 0;
}

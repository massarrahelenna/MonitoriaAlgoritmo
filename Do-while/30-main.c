#include <stdio.h>

int main() {
    int numero, invertido = 0;
    scanf("%d", &numero);
    do {
        invertido = invertido * 10 + numero % 10;
        numero /= 10;
    } while (numero != 0);
    printf("%d\n", invertido);
    return 0;
}

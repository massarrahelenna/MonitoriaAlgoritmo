#include <stdio.h>

int main() {
    int numero, invertido = 0;
    scanf("%d", &numero);

    for (; numero != 0; numero /= 10) {
        invertido = invertido * 10 + numero % 10;
    }

    printf("%d\n", invertido);
    return 0;
}

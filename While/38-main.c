#include <stdio.h>

int main() {
    int numero, count = 0;
    scanf("%d", &numero);
    while (numero > 0) {
        numero /= 10;
        count++;
    }
    printf("%d\n", count);
    return 0;
}

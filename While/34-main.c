#include <stdio.h>

int main() {
    int numero, count = 0;
    while (1) {
        scanf("%d", &numero);
        if (numero < 0) {
            break;
        }
        count++;
    }
    printf("%d\n", count);
    return 0;
}

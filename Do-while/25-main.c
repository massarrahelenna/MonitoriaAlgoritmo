#include <stdio.h>

int main() {
    int N, soma = 0, i = 1;
    scanf("%d", &N);
    do {
        soma += i;
        i += 2;
    } while (i <= N);
    printf("%d\n", soma);
    return 0;
}

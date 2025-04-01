#include <stdio.h>

int main() {
    int N, soma = 0;
    scanf("%d", &N);
    for (int i = 1; i <= N; i += 2) {
        soma += i;
    }
    printf("%d\n", soma);
    return 0;
}

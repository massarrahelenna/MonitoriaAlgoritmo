#include <stdio.h>

int main() {
    int N, fatorial = 1, i = 1;
    scanf("%d", &N);
    do {
        fatorial *= i;
        i++;
    } while (i <= N);
    printf("%d\n", fatorial);
    return 0;
}

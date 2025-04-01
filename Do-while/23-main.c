#include <stdio.h>

int main() {
    int N, i = 2;
    scanf("%d", &N);
    do {
        printf("%d ", i);
        i += 2;
    } while (i <= N);
    printf("\n");
    return 0;
}

#include <stdio.h>

int main() {
    int N, i = 1;
    scanf("%d", &N);
    do {
        printf("%d ", i * i);
        i++;
    } while (i <= N);
    printf("\n");
    return 0;
}

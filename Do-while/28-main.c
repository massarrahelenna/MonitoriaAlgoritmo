#include <stdio.h>

int main() {
    int N, i = 2;
    scanf("%d", &N);
    do {
        int primo = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                primo = 0;
                break;
            }
        }
        if (primo) {
            printf("%d ", i);
        }
        i++;
    } while (i <= N);
    printf("\n");
    return 0;
}

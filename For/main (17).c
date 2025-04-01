#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    for (int i = 2; i <= N; i++) {
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
    }
    printf("\n");
    return 0;
}

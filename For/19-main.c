#include <stdio.h>

int main() {
    int N, a = 0, b = 1, temp;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        printf("%d ", a);
        temp = a;
        a = b;
        b = temp + b;
    }
    printf("\n");
    return 0;
}

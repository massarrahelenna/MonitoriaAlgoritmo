#include <stdio.h>

int main() {
    int N, a = 0, b = 1, temp, i = 1;
    scanf("%d", &N);
    do {
        printf("%d ", a);
        temp = a;
        a = b;
        b = temp + b;
        i++;
    } while (i <= N);
    printf("\n");
    return 0;
}

#include <stdio.h>

int main() {
    int A, B, soma = 0;
    scanf("%d %d", &A, &B);
    if (A > B) {
        int temp = A;
        A = B;
        B = temp;
    }
    while (A <= B) {
        if (A % 2 == 0) {
            soma += A;
        }
        A++;
    }
    printf("%d\n", soma);
    return 0;
}

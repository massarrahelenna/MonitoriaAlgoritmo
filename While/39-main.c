#include <stdio.h>

int main() {
    int limite, a = 0, b = 1, temp;
    scanf("%d", &limite);
    while (a <= limite) {
        printf("%d ", a);
        temp = a;
        a = b;
        b = temp + b;
    }
    printf("\n");
    return 0;
}

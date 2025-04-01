#include <stdio.h>

int main() {
    int temperatura;
    scanf("%d", &temperatura);

    switch (temperatura) {
        case 1:
            printf("Frio\n");
            break;
        case 2:
            printf("Agradável\n");
            break;
        case 3:
            printf("Quente\n");
            break;
        default:
            printf("Temperatura inválida\n");
    }
    return 0;
}


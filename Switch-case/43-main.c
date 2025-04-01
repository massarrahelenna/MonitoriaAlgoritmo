#include <stdio.h>

int main() {
    float nota;
    scanf("%f", &nota);

    switch ((int)nota) {
        case 10:
        case 9:
            printf("A\n");
            break;
        case 8:
            printf("B\n");
            break;
        case 7:
            printf("C\n");
            break;
        case 6:
            printf("D\n");
            break;
        default:
            if (nota < 6)
                printf("F\n");
            else
                printf("Nota inválida\n");
    }
    return 0;
}


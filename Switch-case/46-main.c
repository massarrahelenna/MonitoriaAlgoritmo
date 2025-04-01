#include <stdio.h>

int main() {
    int idade;
    scanf("%d", &idade);

    switch (idade / 10) {
        case 0:
        case 1:
            printf("Criança\n");
            break;
        case 2:
        case 3:
            printf("Adolescente\n");
            break;
        case 4:
        case 5:
        case 6:
            printf("Adulto\n");
            break;
        default:
            printf("Idoso\n");
    }
    return 0;
}

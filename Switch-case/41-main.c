#include <stdio.h>

int main() {
    int num1, num2;
    char op;
    scanf("%d %d %c", &num1, &num2, &op);
    
    switch (op) {
        case '+':
            printf("%d\n", num1 + num2);
            break;
        case '-':
            printf("%d\n", num1 - num2);
            break;
        case '*':
            printf("%d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("%.2f\n", (float)num1 / num2);
            else
                printf("Erro: Divisão por zero\n");
            break;
        default:
            printf("Operação inválida\n");
    }
    return 0;
}

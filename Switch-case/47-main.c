#include <stdio.h>

int main() {
    int opcao;
    do {
        printf("Menu:\n");
        printf("1: Cadastrar\n");
        printf("2: Consultar\n");
        printf("3: Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Opção Cadastrar selecionada\n");
                break;
            case 2:
                printf("Opção Consultar selecionada\n");
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida\n");
        }
    } while (opcao != 3);
    return 0;
}

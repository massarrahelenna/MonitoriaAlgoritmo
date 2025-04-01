#include <stdio.h>

int main() {
    float valor, valorFinal;
    int pagamento;

    
    printf("Digite o valor da compra: R$");
    scanf("%f", &valor);
    
    printf("Escolha a forma de pagamento:\n");
    printf("1 - Pagamento à vista\n");
    printf("2 - Parcelamento\n");
    scanf("%d", &pagamento);

   
    if (pagamento == 1) {
        
        valorFinal = valor * 0.95; 
        printf("Desconto de 5%% aplicado! Valor final: R$ %.2f\n", valorFinal);
    } else if (pagamento == 2) {
        
        valorFinal = valor * 1.10; 
        printf("Acréscimo de 10%% aplicado! Valor final: R$ %.2f\n", valorFinal);
    } else {
        printf("Opção inválida!\n");
    }

    return 0;
}

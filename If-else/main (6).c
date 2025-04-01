#include <stdio.h>

int main() {
    float valor, valorFinal;
    
    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valor);
    
    if(valor > 100) {
        valorFinal = valor * 0.90;
        printf("Valor final da compra com desconto %.2f", valorFinal);
    } else {
        printf("Valor final sem desconto %.2f", valor);
    }
    return 0;
}
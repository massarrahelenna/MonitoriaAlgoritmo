#include <stdio.h>

int main() {
    int x;
    
    printf("Digite um número para descobrir se ele é divisível por 3 e 5 ao mesmo tempo: ");
    scanf("%d", &x);
    
    if(x % 3 == 0 && x % 5 == 0) 
        printf("O número %d é divisível por 3 e 5 ao mesmo tempo", x);
     else 
        printf("O número %d não é divisível por 3 e 5 ao mesmo tempo", x);

    return 0;
}
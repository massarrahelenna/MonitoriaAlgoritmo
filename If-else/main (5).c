#include <stdio.h>

int main() {
    int x;
    
    printf("Digite um número: ");
    scanf("%d", &x);
    
     if (x >= 10 && x <= 50)
        printf("O número %d está dentro do intervalo.\n", x);
        else 
        printf("O número %d está fora do intervalo.\n", x);
    return 0;
}
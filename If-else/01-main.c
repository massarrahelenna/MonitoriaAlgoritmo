#include <stdio.h>

int main () {
    int num;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    if (num > 0)
        printf("Positivo\n");
    else if (num < 0)
        printf("Negativo\n");
    else
        printf("Zero\n");
        

    return 0;
}

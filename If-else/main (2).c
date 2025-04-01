#include <stdio.h>

int main() {
    float n1, n2, n3, media;

   
    printf("Digite as três notas do aluno: ");
    scanf("%f %f %f", &n1, &n2, &n3);

   
    media = (n1 + n2 + n3) / 3;

    
    if (media >= 7)
        printf("Aprovado! \nMédia: %.2f\n", media);
    else
        printf("Reprovado! \nMédia: %.2f\n", media);

    return 0;
}

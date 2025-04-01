#include <stdio.h>

int main() {
    int x, y;
    
    printf("Digite dois números: ");
    scanf("%d %d", &x, &y);
    
    if(x > y) {
        printf("O número %d é maior que %d", x, y);
    } else {
        printf("O número %d é maior que %d", y, x);
    }
    return 0;
}

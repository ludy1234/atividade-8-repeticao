/*#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("O número deve ser positivo.\n");
        return 1;  // Indica um erro ao usuário
    }

    printf("Os divisores de %d são: ", numero);

    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            printf("%d", i);

            // Se não for o último divisor, imprime uma vírgula e espaço
            if (i != numero) {
                printf(", ");
            }
        }
    }
    printf("\n");

}
*/
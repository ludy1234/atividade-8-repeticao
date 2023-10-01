/*#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        int a = 0, b = 1, temp;
        for (int i = 2; i <= n; i++) {
            temp = a + b;
            a = b;
            b = temp;
        }
        return b;
    }
}

int main() {
    int n;

    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Por favor, insira um número não negativo.\n");
    } else {
        int resultado = fibonacci(n);
        printf("O %dº termo da sequência de Fibonacci é: %d\n", n, resultado);
    }

}
*/
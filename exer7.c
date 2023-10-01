/*#include <stdio.h>
#include <ctype.h> // Para a função tolower()

int main() {
    int num_pessoas = 10;
    int contador_homens = 0, contador_mulheres = 0;
    double altura_total_homens = 0, altura_total_mulheres = 0, altura_total_grupo = 0;
    double peso_total_homens = 0, peso_total_mulheres = 0, peso_total_grupo = 0;

    for (int i = 1; i <= num_pessoas; i++) {
        char nome[100];
        char sexo;
        double altura, peso;


        printf("Informe os dados da pessoa %d:\n", i);
        printf("Nome: ");
        scanf(" %[^\n]", nome); // Lê até que uma nova linha seja encontrada
        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);
        sexo = tolower(sexo); // Converte o caractere para minúsculo
        printf("Altura (em metros): ");
        scanf("%lf", &altura);
        printf("Peso (em quilogramas): ");
        scanf("%lf", &peso);

        if (sexo == 'm') {
            contador_homens++;
            altura_total_homens += altura;
            peso_total_homens += peso;
        } else if (sexo == 'f') {
            contador_mulheres++;
            altura_total_mulheres += altura;
            peso_total_mulheres += peso;
        } else {
            printf("Sexo inválido. Por favor, insira M ou F.\n");
            i--; // Para repetir a leitura da mesma pessoa
        }

        altura_total_grupo += altura;
        peso_total_grupo += peso;
    }


    double media_altura_homens = (contador_homens > 0) ? altura_total_homens / contador_homens : 0;
    double media_altura_mulheres = (contador_mulheres > 0) ? altura_total_mulheres / contador_mulheres : 0;
    double media_altura_grupo = altura_total_grupo / num_pessoas;
    double media_peso_homens = (contador_homens > 0) ? peso_total_homens / contador_homens : 0;
    double media_peso_mulheres = (contador_mulheres > 0) ? peso_total_mulheres / contador_mulheres : 0;
    double media_peso_grupo = peso_total_grupo / num_pessoas;

    printf("Número de homens: %d\n", contador_homens);
    printf("Número de mulheres: %d\n", contador_mulheres);
    printf("Altura média dos homens: %.2lf metros\n", media_altura_homens);
    printf("Altura média das mulheres: %.2lf metros\n", media_altura_mulheres);
    printf("Altura média do grupo: %.2lf metros\n", media_altura_grupo);
    printf("Peso médio dos homens: %.2lf kg\n", media_peso_homens);
    printf("Peso médio das mulheres: %.2lf kg\n", media_peso_mulheres);
    printf("Peso médio do grupo: %.2lf kg\n", media_peso_grupo);

}
*/
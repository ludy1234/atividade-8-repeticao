/*#include <stdio.h>

int main() {
    int capacidade = 100;
    int idade, resposta;
    int cont_otimo = 0, cont_bom = 0, cont_regular = 0, cont_ruim = 0, cont_pessimo = 0;
    int soma_idade_ruim = 0, maior_idade_otimo = 0, maior_idade_ruim = 0;

    for (int i = 0; i < capacidade; i++) {
        printf("Informe a idade do espectador %d: ", i + 1);
        scanf("%d", &idade);

        printf("Informe a nota do espectador %d (A, B, C, D, ou E): ", i + 1);
        scanf(" %c", &resposta);  // Note o espaço antes do %c para consumir o caractere de nova linha.

        switch (resposta) {
            case 'A':
                cont_otimo++;
                if (idade > maior_idade_otimo) {
                    maior_idade_otimo = idade;
                }
                break;
            case 'B':
                cont_bom++;
                break;
            case 'C':
                cont_regular++;
                break;
            case 'D':
                cont_ruim++;
                soma_idade_ruim += idade;
                if (idade > maior_idade_ruim) {
                    maior_idade_ruim = idade;
                }
                break;
            case 'E':
                cont_pessimo++;
                if (idade > maior_idade_ruim) {
                    maior_idade_ruim = idade;
                }
                break;
            default:
                printf("Resposta inválida. Por favor, insira A, B, C, D ou E.\n");
                i--;  // Para repetir a leitura do mesmo espectador.
                break;
        }
    }

    double diferenca_percentual = (double)(cont_bom - cont_regular) / capacidade * 100;
    double media_idade_ruim = (cont_ruim != 0) ? (double)soma_idade_ruim / cont_ruim : 0;
    double percentagem_pessimo = (double)cont_pessimo / capacidade * 100;
    int diferenca_idade_maxima = maior_idade_otimo - maior_idade_ruim;

    printf("Quantidade de respostas 'Ótimo': %d\n", cont_otimo);
    printf("Diferença percentual entre 'Bom' e 'Regular': %.2lf%%\n", diferenca_percentual);
    printf("Média de idade das pessoas que responderam 'Ruim': %.2lf\n", media_idade_ruim);
    printf("Percentagem de respostas 'Péssimo': %.2lf%%\n", percentagem_pessimo);
    printf("Diferença de idade entre a maior idade que respondeu 'Ótimo' e 'Ruim': %d anos\n", diferenca_idade_maxima);
}
*/
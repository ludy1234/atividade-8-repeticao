/*#include <stdio.h>

int main() {
    int num_moradores = 50;
    char elevador, periodo;
    int cont_elevador_A = 0, cont_elevador_B = 0, cont_elevador_C = 0;
    int cont_matutino = 0, cont_vespertino = 0, cont_noturno = 0;
    int total_servicos = 0;

    for (int i = 0; i < num_moradores; i++) {
        printf("Morador %d:\n", i + 1);

        printf("Elevador mais utilizado (A, B ou C): ");
        scanf(" %c", &elevador);

        printf("Período de utilização (M, V ou N): ");
        scanf(" %c", &periodo);

        switch (elevador) {
            case 'A':
                cont_elevador_A++;
                break;
            case 'B':
                cont_elevador_B++;
                break;
            case 'C':
                cont_elevador_C++;
                break;
            default:
                printf("Elevador inválido. Por favor, insira A, B ou C.\n");
                i--;  // Para repetir a leitura do mesmo morador.
                continue;
        }

        switch (periodo) {
            case 'M':
                cont_matutino++;
                break;
            case 'V':
                cont_vespertino++;
                break;
            case 'N':
                cont_noturno++;
                break;
            default:
                printf("Período inválido. Por favor, insira M, V ou N.\n");
                i--;  // Para repetir a leitura do mesmo morador.
                continue;
        }

        total_servicos++;
    }

    char elevador_mais_frequente;
    int cont_elevador_mais_frequente = 0;

    if (cont_elevador_A >= cont_elevador_B && cont_elevador_A >= cont_elevador_C) {
        elevador_mais_frequente = 'A';
        cont_elevador_mais_frequente = cont_elevador_A;
    } else if (cont_elevador_B >= cont_elevador_A && cont_elevador_B >= cont_elevador_C) {
        elevador_mais_frequente = 'B';
        cont_elevador_mais_frequente = cont_elevador_B;
    } else {
        elevador_mais_frequente = 'C';
        cont_elevador_mais_frequente = cont_elevador_C;
    }

    char periodo_mais_usado;
    int cont_periodo_mais_usado = 0;

    if (cont_matutino >= cont_vespertino && cont_matutino >= cont_noturno) {
        periodo_mais_usado = 'M';
        cont_periodo_mais_usado = cont_matutino;
    } else if (cont_vespertino >= cont_matutino && cont_vespertino >= cont_noturno) {
        periodo_mais_usado = 'V';
        cont_periodo_mais_usado = cont_vespertino;
    } else {
        periodo_mais_usado = 'N';
        cont_periodo_mais_usado = cont_noturno;
    }

    double diferenca_percentual = ((double)(cont_periodo_mais_usado - cont_matutino) / total_servicos) * 100;
    double percentagem_elevador_medio = ((double)(total_servicos - cont_elevador_mais_frequente) / total_servicos) * 100;


    printf("Período mais usado de todos: %c (%d serviços)\n", periodo_mais_usado, cont_periodo_mais_usado);
    printf("Elevador mais frequentado: %c (%d serviços)\n", elevador_mais_frequente, cont_elevador_mais_frequente);
    printf("Diferença percentual entre o mais usado e o menos usado: %.2lf%%\n", diferenca_percentual);
    printf("Percentagem do elevador de média utilização: %.2lf%%\n", percentagem_elevador_medio);

}
*/
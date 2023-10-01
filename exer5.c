/*#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define NUM_JOGADORAS 5

int main() {
    // Inicialize contadores para cada jogadora
    int votos[NUM_JOGADORAS] = {0};
    int idade_entrevistados[NUM_JOGADORAS] = {0};
    int sexo_entrevistados[NUM_JOGADORAS] = {0};
    int maior_de_idade_entrevistados[NUM_JOGADORAS] = {0};
    int total_mulheres = 0;
    int total_entrevistados = 0;
    
    char *jogadoras[NUM_JOGADORAS] = {
        "Sam Kerr - Austrália",
        "Alex Morgan - Estados Unidos",
        "Dzsenifer Marozsan - Alemanha",
        "Amandine Henry - França",
        "Marta Vieira - Brasil"
    };
    
    int entrevistados = 0;
    char continuar;

    // Loop para coletar votos dos entrevistados
    do {
        char nome[100], sexo;
        int idade, voto;

        printf("Digite o nome: ");
        scanf(" %[^\n]", nome); 

        printf("Digite a idade (maior que 12 anos): ");
        scanf("%d", &idade);

        if (idade <= 12) {
            printf("Idade inválida. A idade deve ser maior que 12 anos.\n");
            continue;
        }

        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);
        sexo = tolower(sexo);

        if (sexo != 'm' && sexo != 'f') {
            printf("Sexo inválido. O sexo deve ser M ou F.\n");
            continue; 
        }

        printf("Escolha uma jogadora:\n");
        for (int i = 0; i < NUM_JOGADORAS; i++) {
            printf("%d - %s\n", i + 1, jogadoras[i]);
        }
        
        printf("Digite o número correspondente à jogadora escolhida: ");
        scanf("%d", &voto);

        if (voto < 1 || voto > NUM_JOGADORAS) {
            printf("Voto inválido. Escolha um número entre 1 e %d.\n", NUM_JOGADORAS);
            continue; 
        }

        votos[voto - 1]++;
        idade_entrevistados[entrevistados] = idade;
        sexo_entrevistados[entrevistados] = sexo;
        
        if (idade >= 18) {
            maior_de_idade_entrevistados[entrevistados] = 1;
        }
        
        if (sexo == 'f') {
            total_mulheres++;
        }
        
        entrevistados++;
        total_entrevistados++;

        printf("Você deseja continuar a pesquisa (S/?)? ");
        scanf(" %c", &continuar);
        
    } while ((continuar == 'S' || continuar == 's') && total_entrevistados < 300);

    printf("Quantidade de votos para cada jogadora:\n");
    for (int i = 0; i < NUM_JOGADORAS; i++) {
        printf("%s: %d votos\n", jogadoras[i], votos[i]);
    }

    int max_votos = votos[0];
    printf("Jogadoras mais votadas:\n");
    for (int i = 0; i < NUM_JOGADORAS; i++) {
        if (votos[i] > max_votos) {
            max_votos = votos[i];
        }
    }
    for (int i = 0; i < NUM_JOGADORAS; i++) {
        if (votos[i] == max_votos) {
            printf("%s\n", jogadoras[i]);
        }
    }

    printf("Pessoas que participaram da pesquisa:\n");
    for (int i = 0; i < total_entrevistados; i++) {
        printf("Nome: Pessoa %d\n", i + 1);
        printf("Idade: %d anos\n", idade_entrevistados[i]);
        printf("Sexo: %c\n", sexo_entrevistados[i]);
    }
    
    printf("Pessoas maiores de idade que votaram na Marta Vieira:\n");
    for (int i = 0; i < total_entrevistados; i++) {
        if (maior_de_idade_entrevistados[i] == 1 && votos[4] > 0) {
            printf("Nome: Pessoa %d\n", i + 1);
        }
    }

    printf("Quantidade de mulheres que participaram da pesquisa: %d\n", total_mulheres);

}
*/
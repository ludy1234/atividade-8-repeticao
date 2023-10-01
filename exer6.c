/*#include <stdio.h>

int main() {
    char continuar;
    
    do {
        int mes, ano;
        
        printf("Digite o mês (1-12): ");
        scanf("%d", &mes);
        
        printf("Digite o ano: ");
        scanf("%d", &ano);

        int bissexto = ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0);
        
        int num_dias;
        switch (mes) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                num_dias = 31;
                break;
            case 4: case 6: case 9: case 11:
                num_dias = 30;
                break;
            case 2:
                num_dias = (bissexto) ? 29 : 28;
                break;
            default:
                printf("Mês inválido.\n");
                continue; // Volta ao início do loop
        }
        
        printf("O mês %d/%d possui %d dias.\n", mes, ano, num_dias);
        
        printf("Você deseja outras entradas (S/?)? ");
        scanf(" %c", &continuar);
        
    } while (continuar == 'S' || continuar == 's');
    
}
*/
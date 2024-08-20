#include <stdio.h>

int main() {
    int opcao;
    float valor, resultado;
    float cotacaoDolar = 5.45;  // Cot do dia 20/05/2024
    float cotacaoEuro = 6.04;   // Cot do dia 20/05/2024

    do {
        printf("Selecione uma opcao:\n");
        printf("1 - Real para Dolar\n");
        printf("2 - Real para Euro\n");
        printf("3 - Dolar para Real\n");
        printf("4 - Euro para Real\n");
        printf("5 - Sair\n");
        scanf("%d", &opcao);

        // Verifica se a opcao é válida
        if (opcao < 1 || opcao > 5) {
            printf("Opcao invalida! Tente novamente.\n");
            continue;
        }

        // Se o usuário quiser sair, termina o loop
        if (opcao == 5) {
            printf("Saindo...\n");
            break;
        }

        // Solicita o valor a ser convertido
        printf("Digite o valor a ser convertido: ");
        scanf("%f", &valor);

        // Executa a conversao baseada na opcao
        switch (opcao) {
            case 1: // Real para Dolar
                resultado = valor / cotacaoDolar;
                printf("Valor convertido: %.2f Dolares\n", resultado);
                break;
            case 2: // Real para Euro
                resultado = valor / cotacaoEuro;
                printf("Valor convertido: %.2f Euros\n", resultado);
                break;
            case 3: // Dolar para Real
                resultado = valor * cotacaoDolar;
                printf("Valor convertido: %.2f Reais\n", resultado);
                break;
            case 4: // Euro para Real
                resultado = valor * cotacaoEuro;
                printf("Valor convertido: %.2f Reais\n", resultado);
                break;
        }
    } while (opcao != 5);

    return 0;
}

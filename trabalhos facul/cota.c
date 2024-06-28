#include <stdio.h>

int main(void) {
    
    float entradareais, entradadolar, valorfinal, resulie, resulimf, cotacao;

    printf("Digite o valor do produto em reais: \n");
    scanf("%f", &entradareais);
    printf("Digite o valor em do produto em dolar: \n");
    scanf("%f", &entradadolar);

    cotacao = entradareais / entradadolar;
    
    resulimf = (entradadolar * 1.2) - entradadolar;

    if(entradadolar < 50) {
        valorfinal = entradadolar * 1.2 * 1.17;
        resulie = (entradadolar * 1.17) - entradadolar;
    }
    else if ( entradadolar >= 50) {
        valorfinal = entradadolar * 1.2 * 1.6;
        resulie = (entradadolar * 1.6) - entradadolar;
    }

    printf("Seu produto passou a custar R$%.2f pois teve a cobranca de imposto federal equivalente a: R$%.2f e mais R$%.2f de imposto estadual", valorfinal * cotacao, resulie * cotacao, resulimf * cotacao);

    return 0;
}
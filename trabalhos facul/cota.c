#include <stdio.h>

int main(void) {
    
    float tax1, tax2, tax3, taxafinal, entrada, valorfinal;

    tax1 = 1.2;
    tax2 = 1.17;
    tax3 = 1.6;

    printf("Digite o valor do produto em reais: \n");
    scanf("%f", &entrada);

    if (entrada < 268) {
        valorfinal = entrada * tax1 * tax2;
    }
    else if (entrada >= 268) {
        valorfinal = entrada * tax1 * tax3;
    }

    taxafinal = valorfinal - entrada;

    printf("Seu produto passou a custar R$%.2f pois teve a cobranca de taxa equivalente a: R$%.2f", valorfinal, taxafinal);

    return 0;
}
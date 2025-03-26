#include <stdio.h>

float pfab,pfinal,imp,lucro,vimp,vlucro;

main() {
    printf("\nDigite o preco de fabrica:");
    scanf("%f",&pfab);
    printf("\nDigite o percentual de imposto:");
    scanf("%f",&imp);
    printf("\nDigite o percentual de lucro do distribuidor:");
    scanf("%f",&lucro);
    vimp = (imp/100) * pfab;
    vlucro = (lucro/100) * pfab;
    pfinal = pfab + vlucro + vimp;
    printf("\nValor de imposto sobre o veiculo: R$ %.2f\nValor de lucro: R$ %.2f\nPreco final do veiculo: R$ %.2f",vimp,vlucro,pfinal);
}
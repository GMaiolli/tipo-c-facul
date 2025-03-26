#include <stdio.h>

float sal,kw,kwcons,conta,contadesc;

main(){
    printf("Digite o valor do salario minimo:");
    scanf("%f",&sal);
    printf("Digite o valor de kW consumido:");
    scanf("%f",&kwcons);

    kw = sal/5;
    conta = kwcons * kw;
    contadesc = conta * 0.85;

    printf("O valor do kW ficou em R$%.2f, assim a conta valendo R$%.2f, com desconto de 15%% ficara R$%.2f",kw,conta,contadesc);

}
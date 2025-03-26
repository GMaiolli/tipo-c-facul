#include <stdio.h>

float cust,ingvalor,ingmin;

main(){
    printf("Qual vai ser o custo do espetaculo?");
    scanf("%f",&cust);
    printf("Qual vai ser o valor do ingresso?");
    scanf("%f",&ingvalor);

    ingmin = cust / ingvalor;
    printf("Devera ser vendido %.1f ingressos para bancar os custos!",ingmin);
}
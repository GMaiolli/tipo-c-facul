#include <stdio.h>

int main(void) {
    int cargo, por, erro;
    float salatual, salfinal, aum;

    printf("Qual o seu salario atual?");
    scanf("%f", &salatual);

    printf("Qual codigo de cargo?");
    scanf("%i", &cargo);

    switch (cargo) {
        case 1 :
            printf("Escriturario: \n");
            aum = salatual*0.5;
            por = 50;
            erro = 0;
            break;

        case 2 :
            printf("Secretario: \n");
            aum = salatual*0.35;
            por = 35;
            erro = 0;
            break;

        case 3 :
            printf("Caixa: \n");
            aum = salatual*0.2;
            por = 20;
            erro = 0;
            break;

        case 4 :
            printf("Gerente: \n");
            aum = salatual*0.1;
            por = 10;
            erro = 0;
            break;

        case 5 :
            printf("Diretor: \n");
            aum = 0;
            por = 0;
            erro = 0;
            break;

        default:
            printf("ERRO! /n");
            erro = 1;
    }
if (erro != 1)
{
    salfinal = salatual + aum;
    printf("Seu aumento de salario foi de %i%% que equivale a R$%.2f e seu novo salario e de R$%.2f", por, aum, salfinal);
}
else printf("Digite um codigo valido!");

    return 0;
}
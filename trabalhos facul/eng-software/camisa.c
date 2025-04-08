#include <stdio.h>

main(){ 

    float camisa,prec,nprec;
    int quant;

    printf("Qual o valor da camisa?");
    scanf("%f",&camisa);

    printf("Quantas camisetas:");
    scanf("%i",&quant);

    prec = camisa * quant;

    if (prec > 200) {
        nprec = prec * 0.90;
        printf("O valor final sem desconto eh de R$%.2f e com desconto de 10%% ficara R$%.2f",prec,nprec);
    } else printf("O valor total foi de RS%.2f",prec);
}
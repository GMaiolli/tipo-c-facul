#include <stdio.h>

float degrau,escadaus,escadafim;

main() {
    printf("Digite o tamanho do degrau em metros:");
    scanf("%f",&degrau);
    printf("Digite a aultura, em metros, que deseja chegar:");
    scanf("%f",&escadaus);

    escadafim = escadaus/degrau;
    printf("Sao nescesarias %.1f escadas!",escadafim);
}
#include <stdio.h>


float b,B,sinB,c;

main() {
    printf("Digite o angulo:");
    scanf("%f",&B);
    printf("Digite a altura:");
    scanf("%f",&b);

    sinB = (4 * B * (180 - B)) / (40500 - (B * (180 - B)));

    c = b/sinB;
    printf("A medida da escada eh de: %.2f",c);
}
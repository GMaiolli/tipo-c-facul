#include <stdio.h>
#include <math.h>

float altura,distancia,escada;

main() {
    printf("Digite a altura:");
    scanf("%f",&altura);
    printf("Digite o tamanho da escada:");
    scanf("%f",&escada);


    if(altura>escada) {
        printf("Valor da altura deve ser menor que o tamanho da escada!");
    } else {
        distancia = sqrt((pow(escada,2)-pow(altura,2)));
        printf("A distancia deve ser de: %.2f",distancia);
    }
}
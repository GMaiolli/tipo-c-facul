#include <stdio.h>

float pesosaco,racgato1,racgato2,racdia5;

main(){
    printf("Qual o peso do saco de racao em quilos:");
    scanf("%f",&pesosaco);
    printf("Qual a quantidade, em gramas, para o primeiro gato:");
    scanf("%f",&racgato1);
    printf("Qual a quantidade, em gramas, para o segundo gato:");
    scanf("%f",&racgato2);

    racdia5 = pesosaco - (((racgato1/1000) + (racgato2/1000)) * 5);
    printf("Sobrara %.3f kg de racao",racdia5);
}
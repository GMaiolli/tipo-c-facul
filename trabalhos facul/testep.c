#include <stdio.h>

int main() {
    char tipo;
    printf("Pessoa fisica ou juridica (F/J): ");
    scanf("%c", &tipo);
    if (tipo == 'F' || tipo == 'f')
        printf("Voce possui um RG e um CPF");
    else if(tipo == 'J' || tipo == 'j') printf("Voce possui um CNPJ e uma Inscricao Estadual");
    else {
        printf("Digite apenas F ou J! \n");
    }

return 0;
}
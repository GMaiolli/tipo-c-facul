#include <stdio.h>

int main() {
    char tipo;
    printf("Pessoa fisica ou juridica (F/J): ");
    scanf("%c", &tipo);
    if (tipo == 'F')
        printf("Voce possui um RG e um CPF");
    else printf("Voce possui um CNPJ e uma Inscricao Estadual");

return 0;
}
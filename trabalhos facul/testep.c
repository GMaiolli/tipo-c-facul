#include <stdio.h>

int main() {

    char tipo;

    do {
    
        printf("Pessoa fisica ou juridica (F/J): \n");
        scanf("%c", &tipo);

    } while(tipo!='f' && tipo!='F' && tipo!='J' && tipo!='j');

if (tipo == 'F' || tipo == 'f')
    printf("Voce possui um RG e um CPF");
else printf("Voce possui um CNPJ e uma Inscricao Estadual");

return 0;
}
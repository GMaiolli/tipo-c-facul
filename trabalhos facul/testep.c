#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

    char tipo;
    char cpf[20];
    char cnpj[20];

    do {
    
        printf("Pessoa fisica ou juridica (F/J): \n");
        scanf("%c", &tipo);
        tipo = toupper(tipo);

    } while(tipo!='J' && tipo!='F');

    if (tipo == 'F') {
        printf("Voce possui um RG e um CPF\n");
        printf("Digite seu CPF: ");
        scanf("%s", &cpf);
    }
    else {
        printf("Voce possui um CNPJ e uma Inscricao Estadual\n");
        printf("Digite seu cnpj: ");
        scanf("%s", &cnpj);
    }

return 0;
}
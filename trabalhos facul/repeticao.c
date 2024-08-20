#include <stdio.h> 

int main(void) {
    int op;

    do {
        printf("Entre com 1 para sim e 0 para nao\n");
        scanf("%i", &op);
    } while(op!=1 && op!=0);

    printf("A sua opcao foi: %i", op);

    return 0;
}
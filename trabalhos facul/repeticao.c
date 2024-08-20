#include <stdio.h> 

int main(void) {
    int op;

    do {
        printf("Entre com 1 para sim e 0 para nao\n");
        scanf("%d", op);
    } while(op!=1 && op!=0);

    printf("A sua opcao foi: %d", op);

    return 0;
}
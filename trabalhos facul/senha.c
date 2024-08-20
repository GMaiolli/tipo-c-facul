#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Função para verificar se a senha é válida
int valida_senha(char senha[]) {
    int tem_letra = 0, tem_numero = 0;
    int comprimento = strlen(senha);

    if (comprimento < 8) {
        return 0; // Senha muito curta
    }

    for (int i = 0; i < comprimento; i++) {
        if (isalpha(senha[i])) {
            tem_letra = 1;
        } else if (isdigit(senha[i])) {
            tem_numero = 1;
        } else {
            return 0; // Contém caractere inválido
        }
    }

    return tem_letra && tem_numero; // Retorna 1 se tiver letra e número, 0 caso contrário
}

int main(void) {
    char senha[50], confirmacao[50];

    do {
        printf("Digite a senha desejada:\n");
        scanf("%[^\n]%*c", senha);  // Lê a senha com espaço

        if (!valida_senha(senha)) {
            printf("Senha invalida. A senha deve ter pelo menos 8 caracteres, contendo apenas letras e numeros.\n");
        }
    } while (!valida_senha(senha)); // Repete até a senha ser válida

    do {
        printf("Confirme a senha:\n");
        scanf("%[^\n]%*c", confirmacao);  // Lê a confirmação com espaço

        if (strcmp(senha, confirmacao) != 0) {
            printf("As senhas não coincidem. Tente novamente.\n");
        }
    } while (strcmp(senha, confirmacao) != 0); // Repete até as senhas coincidirem

    printf("Senha aceita: %s\n", senha);

    return 0;
}
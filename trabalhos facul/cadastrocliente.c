#include <stdio.h>
#include <string.h>

#define MAX_CLIENTES 100
#define TAM_NOME 100
#define TAM_TEL 15

char nomes[MAX_CLIENTES][TAM_NOME];
char telefones[MAX_CLIENTES][TAM_TEL];
int numClientes = 0;

void adicionarcliente() {
    if (numClientes < MAX_CLIENTES) {
        printf("Digite o nome do cliente: ");
        scanf(" %[^\n]%*c", nomes[numClientes]); // Leitura do nome

        printf("Digite o telefone do cliente: ");
        scanf(" %[^\n]%*c", telefones[numClientes]); // Leitura do telefone

        numClientes++;
        printf("Cliente adicionado com sucesso!\n");
    } else {
        printf("Limite de clientes atingido!\n");
    }
}

void visualizarcliente() {
    if (numClientes > 0) {
        printf("Lista de clientes: \n");
        for (int i = 0; i < numClientes; i++) {
            printf("%d. Nome: %s Telefone: %s\n", i + 1, nomes[i], telefones[i]);
        }
    } else {
        printf("Nenhum cliente cadastrado.\n");
    }
}

void editarcliente() {
    int id;
    visualizarcliente();
    if (numClientes > 0) {
        printf("Digite o numero do cliente que deseja editar: ");
        scanf("%d", &id);
        id--; // Ajusta para índice do vetor

        if (id >= 0 && id < numClientes) {
            printf("Digite o novo telefone para %s: ", nomes[id]);
            scanf(" %[^\n]%*c", telefones[id]);
            printf("Telefone atualizado com sucesso!\n");
        } else {
            printf("Cliente não encontrado.\n");
        }
    }
}

void excluircliente() {
    int id;
    visualizarcliente();
    if (numClientes > 0) {
        printf("Digite o numero do cliente que deseja excluir: ");
        scanf("%d", &id);
        id--; // Ajusta para índice do vetor

        if (id >= 0 && id < numClientes) {
            for (int i = id; i < numClientes - 1; i++) {
                strcpy(nomes[i], nomes[i + 1]);
                strcpy(telefones[i], telefones[i + 1]);
            }
            numClientes--;
            printf("Cliente excluído com sucesso!\n");
        } else {
            printf("Cliente não encontrado.\n");
        }
    }
}

int main() {
    int opcao;

    do {
        printf("Selecione uma opcao:\n");
        printf("1 - Adicionar cliente\n");
        printf("2 - Visualizar cliente\n");
        printf("3 - Editar cliente\n");
        printf("4 - Excluir cliente\n");
        printf("5 - Sair\n");
        scanf("%d", &opcao);

        // Verifica se a opcao é válida
        if (opcao < 1 || opcao > 5) {
            printf("Opcao invalida! Tente novamente.\n");
            continue;
        }

        // Se o usuário quiser sair, termina o loop
        if (opcao == 5) {
            printf("Saindo...\n");
            break;
        }

        // Opções em relação aos clientes
        switch (opcao) {
            case 1: // Add cliente
                adicionarcliente();
                break;
            case 2: // Visualizar cliente
                visualizarcliente();
                break;
            case 3: // Editar cliente
                editarcliente();
                break;
            case 4: // Excluir cliente
                excluircliente();
                break;
        }
    } while (opcao != 5);

    return 0;
}

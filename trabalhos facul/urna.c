#include <stdio.h>

int main() {
    int voto, aerosmith = 0, black_sabbath = 0, iron_maiden = 0, nulo = 0, branco = 0;
    int numero_secreto = 9999; // Numero oculto para encerrar a votação

    printf("Bem-vindo a Urna Eletronica\n");
    printf("Candidatos:\n");
    printf("1. Aerosmith de Souza\n");
    printf("2. Black Sabbath dos Santos\n");
    printf("3. Iron Maiden Neves da Silva\n");
    printf("4. Nulo\n");
    printf("5. Branco\n");

    while (1) {
        printf("\nDigite o numero do seu voto (ou %d para encerrar a votacao): ", numero_secreto);
        scanf("%d", &voto);

        if (voto == numero_secreto) {
            printf("Votacao encerrada.\n");
            break;
        }

        switch (voto) {
            case 1:
                aerosmith++;
                printf("Voce votou em Aerosmith de Souza.\n");
                break;
            case 2:
                black_sabbath++;
                printf("Voce votou em Black Sabbath dos Santos.\n");
                break;
            case 3:
                iron_maiden++;
                printf("Voce votou em Iron Maiden Neves da Silva.\n");
                break;
            case 4:
                nulo++;
                printf("Voce votou Nulo.\n");
                break;
            case 5:
                branco++;
                printf("Voce votou Branco.\n");
                break;
            default:
                printf("Voto invalido. Tente novamente.\n");
                continue;
        }
    }

    printf("\nResultado da votacao:\n");
    printf("Aerosmith de Souza: %d votos\n", aerosmith);
    printf("Black Sabbath dos Santos: %d votos\n", black_sabbath);
    printf("Iron Maiden Neves da Silva: %d votos\n", iron_maiden);
    printf("Nulo: %d votos\n", nulo);
    printf("Branco: %d votos\n", branco);

    return 0;
}
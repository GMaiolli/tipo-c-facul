#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

#define MAX_PALAVRAS 100
#define TAM_MAX_PALAVRA 50

char palavras[MAX_PALAVRAS][TAM_MAX_PALAVRA] = {
    "abacaxi", "abelha", "academia", "acolhedor", "amizade", "anel", "antena", "apartamento", "areia", "armadilha",
    "atmosfera", "avestruz", "aviao", "bala", "banheira", "barco", "batom", "biblioteca", "bicicleta", "bloco",
    "bolacha", "borboleta", "brigadeiro", "cadeira", "cachorro", "caderno", "cafe", "camelo", "camiseta", "caneta",
    "carambola", "carne", "carrinho", "carro", "cego", "celular", "chave", "chocolate", "chuva", "cinema", "circo",
    "cidade", "cinto", "cobra", "computador", "corrida", "dado", "danca", "degrau", "dente", "desenho",
    "diamante", "dicionario", "disco", "doce", "dragao", "elefante", "estrela", "estufa", "familia", "farmacia",
    "festa", "flor", "foguete", "formiga", "fotografia", "fruta", "gafanhoto", "galaxia", "garrafa", "gato",
    "geladeira", "girafa", "golfinho", "helicoptero", "hiena", "hipopotamo", "hospital", "hotel", "iguana", "ilha",
    "janela", "jipe", "joaninha", "jornal", "lagartixa", "laranja", "leao", "livro", "mala", "mascara",
    "melancia", "motocicleta", "nave", "notebook", "nuvem", "oceano"
};

int main() {
    srand(time(NULL));

    char pal[TAM_MAX_PALAVRA];
    char sublinhados[TAM_MAX_PALAVRA * 2];

    strcpy(pal, palavras[rand() % MAX_PALAVRAS]);
    for (int i = 0; i < strlen(pal); i++) {
        sublinhados[i * 2] = '_';
        sublinhados[i * 2 + 1] = ' ';
    }
    sublinhados[strlen(pal) * 2] = '\0';

    printf("Palavra secreta: %s\n", pal);
    printf("Advinhe qual a palavra:\n\n");
    printf("%s\n", sublinhados);

    char letras_corretas[TAM_MAX_PALAVRA * 2 + 1]; 
    char letras_erradas[TAM_MAX_PALAVRA * 2 + 1];  
    letras_corretas[0] = '\0'; 
    letras_erradas[0] = '\0';  

    int tentativas = 0;
    int max_tentativas = 6; 

    while (1) {
        if (tentativas >= max_tentativas) {
            printf("\nVoce excedeu o numero maximo de tentativas. A palavra era: %s\n", pal);
            break;
        }

        char letra;
        printf("\nDigite uma letra: ");
        scanf(" %c", &letra);

        letra = tolower(letra);

        printf("Letra digitada: %c\n", letra);

        if (strchr(letras_corretas, letra) != NULL || strchr(letras_erradas, letra) != NULL) {
            printf("Você ja escolheu esta letra. Tente outra.\n");
            continue;
        }

        if (strchr(pal, letra) != NULL) {
            strncat(letras_corretas, &letra, 1);
            printf("Letra correta!\n");
        } else {
            strncat(letras_erradas, &letra, 1);
            printf("Letra incorreta!\n");
            tentativas++;
        }

        char palavra_mostrada[TAM_MAX_PALAVRA * 2 + 1];
        strcpy(palavra_mostrada, sublinhados);
        for (int i = 0; i < strlen(pal); i++) {
            if (strchr(letras_corretas, pal[i]) != NULL) {
                palavra_mostrada[i * 2] = pal[i];
            }
        }
        printf("Palavra: %s\n", palavra_mostrada);

        int todas_letras_corretas = 1;
        for (int i = 0; i < strlen(pal); i++) {
            if (strchr(letras_corretas, pal[i]) == NULL) {
                todas_letras_corretas = 0;
                break;
            }
        }
        if (todas_letras_corretas) {
            printf("Parabens! Voce ganhou!\n");
            break;
        }
    }

    return 0;
}

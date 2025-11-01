#include <stdio.h>
// Desafio de Xadrez - (Versão 2: Nível Aventureiro)

int main() {
    
    const int CASAS_TORRE = 5;
    const int CASAS_BISPO = 5;
    const int CASAS_RAINHA = 8;
    int i; 
    int contador_bispo = 0;
    int contador_rainha = 0;
    const int CAVALO_BAIXO = 2;
    const int CAVALO_ESQUERDA = 1;

    printf("--- Nível Aventureiro ---\n\n");

    printf("Torre (Mover para):\n");
    for (i = 0; i < CASAS_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n");

    printf("Bispo (Mover para):\n");
    while (contador_bispo < CASAS_BISPO) {
        printf("Cima, Direita\n");
        contador_bispo++; 
    }
    printf("\n");

    printf("Rainha (Mover para):\n");
    if (CASAS_RAINHA > 0) {
        do {
            printf("Esquerda\n");
            contador_rainha++;
        } while (contador_rainha < CASAS_RAINHA);
    }
    printf("\n");

    printf("Cavalo (Mover para):\n");

    for (i = 0; i < 1; i++) {
        
        int v_count = 0;
        while (v_count < CAVALO_BAIXO) {
            printf("Baixo\n");
            v_count++;
        }

        int h_count = 0;
        do {
            printf("Esquerda\n");
            h_count++;
        } while (h_count < CAVALO_ESQUERDA);
    }
    printf("\n");

    return 0;
}
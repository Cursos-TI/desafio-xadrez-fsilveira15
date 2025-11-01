#include <stdio.h>

// Desafio de Xadrez - MateCheck (Versão 3: Nível Mestre)


/**
 * @brief
 * @param casas
 */
void moverTorreMestre(int casas) {
    if (casas <= 0) {
        return;
    }
    
    printf("Direita\n");

    moverTorreMestre(casas - 1);
}

/**
 * @brief
 * @param casas
 */
void moverRainhaMestre(int casas) {

    if (casas <= 0) {
        return;
    }
    printf("Esquerda\n");
    moverRainhaMestre(casas - 1);
}

/**
 * @brief
 * @param passo_atual
 * @param limite
 */
void moverBispoMestre(int passo_atual, int limite) {
 
    if (passo_atual >= limite) {
        return;
    }

    for (int v = 0; v < 1; v++) {

        for (int h = 0; h < 1; h++) {
 
            printf("Cima, Direita\n");
        }
    }
    

    moverBispoMestre(passo_atual + 1, limite);
}


int main() {

    const int CASAS_TORRE = 5;
    const int CASAS_BISPO = 5;
    const int CASAS_RAINHA = 8;
    const int CAVALO_CIMA_MESTRE = 2;
    const int CAVALO_DIREITA_MESTRE = 1;

    printf("--- Nível Mestre ---\n\n");


    printf("Torre (Mover para):\n");
    moverTorreMestre(CASAS_TORRE);
    printf("\n");

    printf("Rainha (Mover para):\n");
    moverRainhaMestre(CASAS_RAINHA);
    printf("\n");

    printf("Bispo (Mover para):\n");

    moverBispoMestre(0, CASAS_BISPO);
    printf("\n");

    printf("--- Nível Mestre (Loop Complexo) ---\n\n");

    printf("Cavalo (Mover loop):\n");

    for (int v = 0, h = 0; ; v++) {

        if (v < CAVALO_CIMA_MESTRE) { 
            printf("Cima\n"); 

            continue; 
        }

        if (h < CAVALO_DIREITA_MESTRE) { 
            printf("Direita\n");
            h++;
        }

        if (h >= CAVALO_DIREITA_MESTRE) {
            break; 
        }
    }
    printf("\n");

    return 0;
}
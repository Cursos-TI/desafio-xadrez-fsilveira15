#include <stdio.h> 
// Desafio de Xadrez (Versão 1: Nível Novato)

int main() {
    
    const int CASAS_TORRE = 5;
    const int CASAS_BISPO = 5;   
    const int CASAS_RAINHA = 8;
    
    // Variáveis de controle para os loops
    int i; // Variável de controle para o loop 'for'
    int contador_bispo = 0; // Variável de controle para o loop 'while'
    int contador_rainha = 0; // Variável de controle para o loop 'do-while'

    printf("--- Nível Novato ---\n\n");

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

    return 0;
}

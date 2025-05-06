#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

#define TAM 10
#define TAM_NAVIO 3
#define NAVIO 3

int main() {
    int tabuleiro[TAM][TAM];

    // Inicializa tabuleiro com água (0)
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Navios representados por vetores
    int navio_horizontal[TAM_NAVIO] = {NAVIO, NAVIO, NAVIO};
    int navio_vertical[TAM_NAVIO] = {NAVIO, NAVIO, NAVIO};

    // Coordenadas iniciais
    int linhaH = 2, colunaH = 4;
    int linhaV = 5, colunaV = 1;

    // Posiciona navio horizontal
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linhaH][colunaH + i] = navio_horizontal[i];
        printf("Navio Horizontal - Parte %d: (%d, %d)\n", i + 1, linhaH, colunaH + i);
    }

    // Posiciona navio vertical
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linhaV + i][colunaV] = navio_vertical[i];
        printf("Navio Vertical - Parte %d: (%d, %d)\n", i + 1, linhaV + i, colunaV);
    }

    // Exibe o tabuleiro
    printf("\nTabuleiro:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}


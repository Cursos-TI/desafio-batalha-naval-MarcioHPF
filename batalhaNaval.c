#include <stdio.h>

int main() {
    printf("- - - Batalha Naval - - -\n\n");

    // Declaração de variáveis
    int tabuleiro[10][10]; // Cria a matriz para o tabuleiro 10x10
    int l, c; // Cria as variáveis para linhas e colunas do tabuleiro

   // Inicia e preenche a matriz com "0" para representar a água
   printf("Inicializando o tabuleiro \n"); 
   for (l = 0; l < 10; l++) {
        for (c = 0; c < 10; c++) {
            tabuleiro[l][c] = 0; // Coloca 0 (água) em todas as posições
        }
    }

   // Coloca o primeiro navio na horizontal
   printf("Posicionando o primeiro navio (horizontal) de tamanho 3.\n");
   printf("Ele vai da linha 2, coluna 1 até a coluna 3.\n");

   for (c = 0; c < 3; c++) { // O loop vai de 0 a 2 (3 vezes)
        tabuleiro[2][1 + c] = 3; // Coloca 3 (navio) nas posições
    }
    printf("Navio horizontal posicionado!\n\n");

    // Coloca o segundo navio na vertical
    printf("Posicionando o segundo navio (vertical) de tamanho 3.\n");
    printf("Ele vai da linha 1, coluna 5 até a linha 3.\n");

    for (l = 0; l < 3; l++) { // O loop vai de 0 a 2 (3 vezes)
        tabuleiro[1 + l][5] = 3; // Coloca 3 (navio) nas posições
    }
    printf("Navio vertical posicionado!\n\n");

    




    return 0;
}

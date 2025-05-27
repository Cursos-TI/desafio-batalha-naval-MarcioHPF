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
    printf("Ele vai da linha 4, coluna 7 até a linha 3.\n");

    for (l = 0; l < 3; l++) { // O loop vai de 0 a 2 (3 vezes)
        tabuleiro[4 + l][7] = 3; // Coloca 3 (navio) nas posições
    }
    printf("Navio vertical posicionado!\n\n");

   //Exibe o tabuleiro final
   printf("------- Tabuleiro Final -------\n\n");
   printf("------------------------------\n");


   for (l = 0; l < 10; l++) {
        // Percorre cada coluna da linha atual (de 0 a 9) para imprimir o valor
        for (c = 0; c < 10; c++) {
            printf("%2d ", tabuleiro[l][c]); // Imprime o 0 ou 3 com 2 espaços
        }
        printf("|\n"); // Quebra de linha no final de cada linha do tabuleiro
    }

    printf("------------------------------\n");
    printf("\n- - - Jogo de Batalha Naval Concluído! - - -\n\n");

    return 0;
}

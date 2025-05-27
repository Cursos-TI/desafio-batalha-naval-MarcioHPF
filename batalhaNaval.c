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

   




    return 0;
}

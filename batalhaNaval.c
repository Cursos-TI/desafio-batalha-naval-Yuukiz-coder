#include <stdio.h>

//Nao consegui adicionar verificação de sobreposição pois em nenhum momento das aulas foi mencionado isso.

//Constantes declaradas
#define LINHAS 10
#define COLUNAS 10
#define TAMANHONAVIO 3

int main() {

    //Tabuleiro
    int tabuleiro[LINHAS][COLUNAS];

    //Tabuleiro com 0
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            tabuleiro[i][j] = 0;   
        }
    }

    //Coordenadas dos navios

    //Vou inserir o navio1 na linha 3 na horizontal a partir da coluna 2
    for (int i = 0; i < TAMANHONAVIO; i++) {
        tabuleiro[3][2 + i] = 3;
    }
    //Vou inserir o navio2 na coluna 7 na vertical a partir da linha 0
    for (int i = 0; i < TAMANHONAVIO; i++) {
        tabuleiro[0 + i][7] = 3;
    }

    //Vou inserir o navio3 na coluna 5 linha 5 até a coluna 8 linha 8
    for (int i = 0; i < TAMANHONAVIO; i++) {
        tabuleiro[5 + i][5 + i] = 3;
    }
    
    //Vou inseir o navio4 na coluna 2 linha 0 até a coluna 0 linha 2
    for (int i = 0; i < TAMANHONAVIO; i++) {
        tabuleiro[0 + i][2 - i] = 3;
    }

    //Mensagem inicial
    printf("\n---Tabuleiro Batalha Naval em C---\n\n");

    //Exibição do tabuleiro com os barcos posicionados
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    //Mensagem final
    printf("\nFim!\n");

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}

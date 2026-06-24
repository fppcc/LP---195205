/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Felipe Reis Da Silva
Linguagem   : C
Problema    : Jogo Interativo de Sudoku (jogo.c)
Data        : 22/06/2026
Objetivo    : Permitir que o usuário preencha interativamente os zeros do 
               tabuleiro da imagem até completar e validar o jogo.
Aprendizado : Manipulação de matrizes, loops de controle de jogo interativo 
               e validação de submatrizes 3x3.
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>

#define TAM 9

void imprimirTabeleiro(int matriz[TAM][TAM]) {
    printf("\n    0 1 2   3 4 5   6 7 8\n");
    printf("  -------------------------\n");
    for (int i = 0; i < TAM; i++) {
        if (i > 0 && i % 3 == 0) {
            printf("  ------+-------+------\n");
        }
        printf("%d | ", i);
        for (int j = 0; j < TAM; j++) {
            if (j > 0 && j % 3 == 0) {
                printf("| ");
            }
            if (matriz[i][j] == 0) {
                printf(". ");
            } else {
                printf("%d ", matriz[i][j]);
            }
        }
        printf("|\n");
    }
    printf("  -------------------------\n");
}

int verificarFim(int matriz[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (matriz[i][j] == 0) return 0;
        }
    }
    
    for (int i = 0; i < TAM; i++) {
        int linha[10] = {0};
        int coluna[10] = {0};
        for (int j = 0; j < TAM; j++) {
            int valL = matriz[i][j];
            int valC = matriz[j][i];
            if (linha[valL] == 1 || coluna[valC] == 1) return 0;
            linha[valL] = 1;
            coluna[valC] = 1;
        }
    }

    for (int lin = 0; lin < TAM; lin += 3) {
        for (int col = 0; col < TAM; col += 3) {
            int bloco[10] = {0};
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    int val = matriz[lin + i][col + j];
                    if (bloco[val] == 1) return 0;
                    bloco[val] = 1;
                }
            }
        }
    }
    return 1;
}

int main() {
    int tabuleiro[TAM][TAM];
    int original[TAM][TAM];
    
    FILE *arquivo = fopen("input2.txt", "r");
    
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo input2.txt!\n");
        return 1;
    }

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (fscanf(arquivo, "%d", &tabuleiro[i][j]) != 1) {
                printf("Erro ao ler os dados do arquivo.\n");
                fclose(arquivo);
                return 1;
            }
            if (tabuleiro[i][j] != 0) {
                original[i][j] = 1; 
            } else {
                original[i][j] = 0;
            }
        }
    }
    fclose(arquivo);

    int l, c, valor;
    
    while (1) {
        imprimirTabeleiro(tabuleiro);
        
        int preenchido = 1;
        for (int i = 0; i < TAM; i++) {
            for (int j = 0; j < TAM; j++) {
                if (tabuleiro[i][j] == 0) preenchido = 0;
            }
        }
        
        if (preenchido) {
            if (verificarFim(tabuleiro)) {
                printf("\nParabens! Voce resolveu o Sudoku corretamente!\n");
                break;
            } else {
                printf("\nO tabuleiro esta cheio, mas existem erros na sol

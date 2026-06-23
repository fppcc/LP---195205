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

int main() {
    int v[9][9] = {
        {1, 3, 2, 5, 7, 9, 4, 6, 8},
        {4, 0, 8, 2, 6, 1, 3, 7, 5},
        {7, 5, 6, 3, 8, 4, 2, 1, 9},
        {6, 4, 3, 0, 5, 8, 7, 9, 2},
        {5, 2, 1, 7, 9, 3, 8, 4, 6},
        {9, 8, 7, 4, 2, 6, 5, 3, 0},
        {2, 1, 4, 9, 3, 5, 6, 8, 7},
        {3, 6, 5, 8, 1, 7, 9, 2, 4},
        {8, 7, 0, 6, 4, 2, 0, 5, 3}
    };

    while (1) {
        int zeros = 0;
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (v[i][j] == 0) {
                    zeros++;
                }
            }
        }

        printf("\n    0 1 2   3 4 5   6 7 8\n");
        printf("  +-------+-------+-------+\n");
        for (int i = 0; i < 9; i++) {
            printf("%d | ", i);
            for (int j = 0; j < 9; j++) {
                if (v[i][j] == 0) {
                    printf(". ");
                } else {
                    printf("%d ", v[i][j]);
                }
                if ((j + 1) % 3 == 0) {
                    printf("| ");
                }
            }
            printf("\n");
            if ((i + 1) % 3 == 0) {
                printf("  +-------+-------+-------+\n");
            }
        }

        if (zeros == 0) {
            int cont = 0;

            for (int i = 0; i < 9; i++) {
                int c[10] = {0};
                for (int j = 0; j < 9; j++) {
                    int val = v[i][j];
                    if (c[val] == 1) cont++;
                    else c[val] = 1;
                }
            }

            for (int j = 0; j < 9; j++) {
                int c[10] = {0};
                for (int i = 0; i < 9; i++) {
                    int val = v[i][j];
                    if (c[val] == 1) cont++;
                    else c[val] = 1;
                }
            }

            for (int i = 0; i < 9; i += 3) {
                for (int j = 0; j < 9; j += 3) {
                    int c[10] = {0};
                    for (int x = 0; x < 3; x++) {
                        for (int y = 0; y < 3; y++) {
                            int val = v[i + x][j + y];
                            if (c[val] == 1) cont++;
                            else c[val] = 1;
                        }
                    }
                }
            }

            if (cont == 0) {
                printf("\nSUDOKU CORRETO\n");
            } else {
                printf("\nSUDOKU INCORRETO\n");
            }
            break;
        }

        int l, c, n;
        printf("\nDigite: Linha Coluna Numero (ex: 1 1 9): ");
        if (scanf("%d %d %d", &l, &c, &n) != 3) {
            break;
        }

        if (l >= 0 && l < 9 && c >= 0 && c < 9 && n >= 1 && n <= 9) {
            if (v[l][c] == 0) {
                v[l][c] = n;
            } else {
                printf("\nEssa posicao ja tem numero fixo!\n");
            }
        } else {
            printf("\nCoordenadas ou numero invalidos!\n");
        }
    }

    return 0;
}

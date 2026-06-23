/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Felipe Reis Da Silva
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1435
Data        : 22/06/2026
Objetivo    : Verificar se uma grade de Sudoku está correta.
Aprendizado : Manipulação de matrizes, vetores de contagem e validação
               de linhas, colunas e submatrizes.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    int n;
    
    while (scanf("%d", &n) == 1 && n != 0) {
        int m[n][n];
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int min = i;
                if (j < min) min = j;
                if (n - 1 - i < min) min = n - 1 - i;
                if (n - 1 - j < min) min = n - 1 - j;
                m[i][j] = min + 1;
            }
        }
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j == 0) printf("%3d", m[i][j]);
                else printf(" %3d", m[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    
    return 0;
}

/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Felipe Reis Da Silva
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/2552
Data        : 22/06/2026
Objetivo    : Verificar se uma grade de Sudoku está correta.
Aprendizado : Manipulação de matrizes, vetores de contagem e validação
               de linhas, colunas e submatrizes.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    int n, m;
    
    while (scanf("%d %d", &n, &m) == 2) {
        int mat[n][m];
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (scanf("%d", &mat[i][j]) != 1) return 0;
            }
        }
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 1) {
                    printf("9");
                } else {
                    int cont = 0;
                    if (i > 0 && mat[i - 1][j] == 1) cont++;
                    if (i < n - 1 && mat[i + 1][j] == 1) cont++;
                    if (j > 0 && mat[i][j - 1] == 1) cont++;
                    if (j < m - 1 && mat[i][j + 1] == 1) cont++;
                    printf("%d", cont);
                }
            }
            printf("\n");
        }
    }
    
    return 0;
}

/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Felipe Reis Da Silva
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/
Data        : 09/06/2026
Objetivo    : 
Aprendizado : 
-------------------------------------------------------------------------- */



#include <stdio.h>

int main() {
    int n;

    while (scanf("%d", &n) != EOF) {
        int mat[n][n];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {

                if (i == j)
                    mat[i][j] = 1;
                else if (i + j == n - 1)
                    mat[i][j] = 2;
                else
                    mat[i][j] = 3;

                printf("%d", mat[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}

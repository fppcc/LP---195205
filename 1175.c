/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Felipe Reis Da Silva
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1175
Data        : 22/06/2026
Objetivo    : Verificar se uma grade de Sudoku está correta.
Aprendizado : Manipulação de matrizes, vetores de contagem e validação
               de linhas, colunas e submatrizes.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    int N[20];
    
    for (int i = 0; i < 20; i++) {
        if (scanf("%d", &N[i]) != 1) return 0;
    }
    
    for (int i = 0; i < 10; i++) {
        int temp = N[i];
        N[i] = N[19 - i];
        N[19 - i] = temp;
    }
    
    for (int i = 0; i < 20; i++) {
        printf("N[%d] = %d\n", i, N[i]);
    }
    
    return 0;
}

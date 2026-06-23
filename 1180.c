/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Felipe Reis Da Silva
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1180
Data        : 22/06/2026
Objetivo    : Verificar se uma grade de Sudoku está correta.
Aprendizado : Manipulação de matrizes, vetores de contagem e validação
               de linhas, colunas e submatrizes.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    int x[n];
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &x[i]) != 1) return 0;
    }
    
    int menor = x[0];
    int pos = 0;
    
    for (int i = 1; i < n; i++) {
        if (x[i] < menor) {
            menor = x[i];
            pos = i;
        }
    }
    
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", pos);
    
    return 0;
}

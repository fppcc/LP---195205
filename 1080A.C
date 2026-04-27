/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Felipe Reis Da Silva
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 27/04/2026
Objetivo    : ler 100 valores inteiros, apresentar o maior e a posição
Aprendizado : entender para que os vetores facilitam na linguagem c
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int n, m = -1, p = 0;
    for (int i = 1; i <= 100; i++) {
        scanf("%d", &n);
        if (n > m) {
            m = n;
            p = i;
        }
    }
    printf("%d\n%d\n", m, p);
    return 0;
}

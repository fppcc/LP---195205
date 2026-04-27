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
    int v[100], m = -1, p = 0;
    for (int i = 0; i < 100; i++) {
        scanf("%d", &v[i]);
        if (v[i] > m) {
            m = v[i];
            p = i + 1;
        }
    }
    printf("%d\n%d\n", m, p);
    return 0;
}
